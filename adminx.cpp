#include "adminx.h"
#include "login.h"
#include "ui_adminx.h"
#include"news.h"
#include"newsbasedon.h"
#include"qmessagebox.h"

Adminx::Adminx(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Adminx)
{
    ui->setupUi(this);
    ui->pushButton_OkCurrentCategory->hide();
    ui->pushButton_currentCategory->hide();
    ui->comboBox_selectCurrentCategory->hide();
    ui->pushButton_newCategory->hide();
    ui->pushButton_OkNewCategory->hide();
    ui->pushButton_Ok->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    Adminx::backbuttons[2]=true;
    Adminx::backbuttons[0]=false;
    Adminx::backbuttons[1]=false;
    Adminx::backbuttons[3]=false;
}

Adminx::~Adminx()
{
    delete ui;
}
void Adminx::WriteUserDataInFiles()
{
    fstream file("usersData.txt",ios::out);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for (int i = 0; i < users.size(); i++) {
        file << users[i].getFirstName()<<" "<<users[i].getLastName()<<" "<<users[i].getUsername() << " " << users[i].getPassword() << " " << users[i].getEmail() << ((i == (users.size() - 1)) ? "" : "\n");
    }
    qDebug() << "1233";
    file.close();
}
void Adminx::WriteFavNewInFiles(){
    ofstream file("FavNewsData.txt");
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    int i = 0;
    for(const auto& it :News::favNews){
        i++;
        file<<it.first<< endl;
        int j = 0;
        for(string favn :it.second){
            j++;
            file << favn<< endl;
        }
        file << "|" << ((j == it.second.size() && i == News::favNews.size()) ? "" : "\n");
    }

    qDebug() << "1253";
    file.close();

}
void Adminx::WriteNewsDataInFiles()
{
    fstream file("newsData.txt", ios::out);
    if (!file) {
        qDebug() << "file not found";
        return;
    }
    for (int i = 0; i < news.size(); i++) {
        file << news[i].getTitle() << "\n";
        file << news[i].getDate() << "\n";
        file << news[i].getCategory() << "\n";
        file << news[i].getAvgRate() << "\n";
        file << news[i].getDescription() << ((i == news.size() - 1) ? "" : "\n");
    }
    qDebug() << "1243";
    file.close();
}
void Adminx::WriteNewsNumInFiles(){
    ofstream file("NewsNum.txt");
    file << Adminx::news.size();
}
void Adminx::WriteRateInFiles(){
    ofstream file("RateNews.txt");
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for(int i = 0; i < Adminx::news.size(); i++)
    {
        file << Adminx::news[i].rates.size();

        for(auto [key, value] : Adminx::news[i].rates)
        {
            file << '\n' << key << ' ' << value;
        }
        file << ((i == Adminx::news.size() - 1) ? "" : "\n");
    }
    file.close();
}
void Adminx::ReadUserDataFromFiles()
{
    User temp;
    fstream file("usersData.txt",ios::in);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for(int i=0;!file.eof();i++)
    {
        string tfirstname;
        string tlastname;
        string tusername;
        string tpassword;
        string temail;
        file >>tfirstname>>tlastname>>tusername>>tpassword>>temail;
        temp=User(tfirstname,tlastname,tusername,tpassword,temail);
        users.push_back(temp);
    }
    file.close();
}
void Adminx::ReadFavNewFromFiles(){
    ifstream file("FavNewsData.txt");
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    while(!file.eof())
    {
        string key; // getting key as string
        vector<string> favourites; // getting favourites vector
        getline(file, key);
        while(true)
        {
            string favourite;
            getline(file, favourite);
            if(favourite == "|") // stops when we found the charcater '|'
                break;
            favourites.push_back(favourite);
        }
        News::favNews[stoi(key)] = favourites;
    }
    file.close();
}
void Adminx::ReadNewsDataFromFiles()
{
    NewsModel newsModel;
    ifstream file("newsData.txt",ios::in);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for(int i = 0;i < newsSize; i++)
    {
        string title;
        string description;
        string date;
        string category;
        string avgRate;
        getline(file, title);
        getline(file, date);
        getline(file, category);
        getline(file, avgRate);
        getline(file, description);
        newsModel = NewsModel(title, description, date, category, stod(avgRate));
        news.push_back(newsModel);
    }
    file.close();
}
void Adminx::ReadNewsNumFromFiles(){
    ifstream file("NewsNum.txt");
    file >> newsSize;
}
void Adminx::ReadRateFromFiles(){
    ifstream file("RateNews.txt");
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    int news;
    for(int i = 0; i < newsSize; i++)
    {
        file >> news;
        while(news != 0)
        {
            news--;
            int key, value;
            file >> key >> value;
            Adminx::news[i].rates[key] = value;
            User::Rates[{key, Adminx::news[i].getTitle()}] = value;
        }
    }
    file.close();

}
void Adminx::WriteInFiles()
{
    WriteNewsNumInFiles();
    WriteUserDataInFiles();
    WriteNewsDataInFiles();
    WriteFavNewInFiles();
    WriteRateInFiles();
}
void Adminx::ReadFromFiles()
{
    ReadNewsNumFromFiles();
    ReadUserDataFromFiles();
    ReadNewsDataFromFiles();
    ReadFavNewFromFiles();
    ReadRateFromFiles();
}


void Adminx::on_pushButton_addNew_clicked()
{
    checkedAdmin[0]=true;
    checkedAdmin[1]=false;
    checkedAdmin[2]=false;
    checkedAdmin[3]=false;
    ui->pushButton_removeNew->hide();
    ui->pushButton_updateNew->hide();
    ui->pushButton_DisplayAvgRate->hide();
    ui->pushButton_currentCategory->show();
    ui->pushButton_newCategory->show();
}


void Adminx::on_pushButton_newCategory_clicked()
{
    ui->pushButton_currentCategory->hide();
    ui->pushButton_addNew->hide();
    ui->label_3->show();
    ui->lineEdit_2->show();
    ui->pushButton_OkNewCategory->show();
}
void Adminx::on_pushButton_currentCategory_clicked()
{
    ui->comboBox_selectCurrentCategory->clear();
    ui->label_2->show();
    ui->pushButton_addNew->hide();
    ui->pushButton_newCategory->hide();
    ui->comboBox_selectCurrentCategory->show();
    ui->lineEdit->show();
    ui->pushButton_OkCurrentCategory->show();
    for(int i=0;i<Adminx::news.size();i++){
        ui->comboBox_selectCurrentCategory->addItem(Adminx::news[i].getCategory().c_str());
    }
}
void Adminx::on_pushButton_OkNewCategory_clicked()
{
    bool check=false;
    NewCat=ui->lineEdit_2->text().toStdString();
    for(int i=0;i<news.size();i++){
        if(NewCat==news[i].getCategory()){
            check=true;
        }
    }
    if(check){
        QMessageBox::warning(this,"Error","this Category is already exist !");
    }
    else if(!check&&ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this,"Error","please write Category Name !");
    }
    else{
        qDebug()<<NewCat;
        hide();
        News *New=new News (this);
        New->show();
        New->AddNew();
    }
}


void Adminx::on_pushButton_OkCurrentCategory_clicked()
{
    ui->lineEdit->setText(ui->comboBox_selectCurrentCategory->currentText());
    NewCat=ui->lineEdit->text().toStdString();
    if(NewCat.empty()){
        QMessageBox::warning(this,"Error","please Selecy Category");
    }
    else{
        qDebug()<<NewCat;
        hide();
        News *New=new News (this);
        New->show();
        New->AddNew();
    }
}
void Adminx::on_pushButton_2_clicked()
{
    hide();
    Login*lo=new Login(this);
    lo->show();
}



void Adminx::on_pushButton_updateNew_clicked()
{
    ui->comboBox_selectCurrentCategory->clear();
    checkedAdmin[1]=true;
    checkedAdmin[0]=false;
    checkedAdmin[2]=false;
    checkedAdmin[3]=false;
    ui->pushButton_Ok->show();
    ui->pushButton_addNew->hide();
    ui->pushButton_removeNew->hide();
    ui->pushButton_DisplayAvgRate->hide();
    ui->comboBox_selectCurrentCategory->show();
    ui->label_4->show();
    for(int i=0;i<news.size();i++){
        ui->comboBox_selectCurrentCategory->addItem(news[i].getTitle().c_str());
    }
}
void Adminx::on_pushButton_Ok_clicked()
{

    News*n=new News(this);
    ui->lineEdit->setText(ui->comboBox_selectCurrentCategory->currentText());
    NewCat=ui->lineEdit->text().toStdString();
    for(int i=0;i<news.size();i++){
        if(NewCat==news[i].getTitle()){
            Newsbasedon::currentNew=i;
        }
    }
    if(checkedAdmin[1]){
        hide();
        n->displayNew();
        n->show();
        n->showEditButtons();
    }
    else if(checkedAdmin[2]){
        qDebug()<<news[Newsbasedon::currentNew].getTitle();
        news.erase(news.begin()+Newsbasedon::currentNew);
        QMessageBox::information(this,"Success","New removed");
        ui->comboBox_selectCurrentCategory->clear();

        for(auto it:news){
            ui->comboBox_selectCurrentCategory->addItem(it.getTitle().c_str());
        }
    }
    else if(checkedAdmin[3]){
        ui->label_2->show();
        ui->label_2->setText("Average rate");
        ui->lineEdit->show();
        string avgRate=to_string(news[Newsbasedon::currentNew].getAvgRate());
        ui->lineEdit->setText(avgRate.c_str());
    }
}
void Adminx::on_pushButton_removeNew_clicked()
{
    ui->comboBox_selectCurrentCategory->clear();
    checkedAdmin[2]=true;
    checkedAdmin[0]=false;
    checkedAdmin[1]=false;
    checkedAdmin[3]=false;
    ui->pushButton_addNew->hide();
    ui->pushButton_updateNew->hide();
    ui->pushButton_DisplayAvgRate->hide();
    ui->label_4->show();
    ui->label_4->setText("Select New to Remove:");
    ui->comboBox_selectCurrentCategory->show();
    ui->pushButton_Ok->show();
    for(int i=0;i<news.size();i++){
        ui->comboBox_selectCurrentCategory->addItem(news[i].getTitle().c_str());
    }
}
void Adminx::on_pushButton_DisplayAvgRate_clicked()
{
    ui->comboBox_selectCurrentCategory->clear();
    checkedAdmin[3]=true;
    checkedAdmin[0]=false;
    checkedAdmin[1]=false;
    checkedAdmin[2]=false;
    ui->pushButton_addNew->hide();
    ui->pushButton_removeNew->hide();
    ui->pushButton_updateNew->hide();
    ui->comboBox_selectCurrentCategory->show();
    ui->pushButton_Ok->show();
    ui->label_4->setText("Select New :");
    for(int i=0;i<news.size();i++){
        ui->comboBox_selectCurrentCategory->addItem(news[i].getTitle().c_str());
    }
}

