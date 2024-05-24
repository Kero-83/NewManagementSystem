#include "newsbasedon.h"
#include "homepage.h"
#include "ui_newsbasedon.h"
#include"stdafx.h"
#include"news.h"
#include"qmessagebox.h"
Newsbasedon::Newsbasedon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Newsbasedon)
{
    ui->setupUi(this);
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->CaegoryList->hide();
    ui->comboBox->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_showNew->hide();
    ui->pushButton_showTitle->hide();
}
string trendingNews;
 vector<QString>TitlesOfCategory;
Newsbasedon::~Newsbasedon()
{
    delete ui;
}

void Newsbasedon::on_pushButton_Category_clicked()
{
    checked[1]=true;
    checked[0]=false;
    checked[2]=false;
    checked[3]=false;
    ui->label_6->show();
    ui->pushButton_Rate->hide();
    ui->pushButton_Time->hide();
    ui->pushButton_descendingRate->hide();
    ui->CaegoryList->show();
    ui->pushButton->show();
    ShowNewBasedOnCategory();
}
void Newsbasedon::RemoveDublicates(){
     QSet<string>uniqueItems;
    ui->CaegoryList->count();
     for(int i=0;i<ui->CaegoryList->count();++i){
        QString itemText=ui->CaegoryList->itemText(i);
        if(uniqueItems.contains(itemText.toStdString())){
            ui->CaegoryList->removeItem(i);
            --i;
        }
        else{
            uniqueItems.insert(itemText.toStdString());
        }
    }
}
void Newsbasedon::ShowNewBasedOnCategory(){
    ui->CaegoryList->clear();
    for(int i=0;i<Adminx::news.size();i++){
        if(Adminx::news[i].getAvgRate()>=2||Adminx::news[i].getAvgRate()==0){
        ui->CaegoryList->addItem(Adminx::news[i].getCategory().c_str());
        }
    }
    RemoveDublicates();
}
void Newsbasedon:: ShowNewBasedOnRating(){
    ui->label_4->show();
    ui->CaegoryList->show();
    ui->pushButton->show();
    ui->CaegoryList->clear();
    multimap<double,NewsModel>New;
    for(int i=0;i<Adminx::news.size();i++){
        New.insert({Adminx::news[i].getAvgRate(),Adminx::news[i]});
    }
    stack<NewsModel>descendingRate;
    for(auto t:New){
    if (t.second.getAvgRate()>3.5)
        descendingRate.push(t.second);
    }
    int trendingNewsSize=descendingRate.size();
    for(int i=0;i<trendingNewsSize;i++){
     trendingNews=descendingRate.top().getTitle();
    ui->CaegoryList->addItem(trendingNews.c_str());
     qDebug()<< descendingRate.top().getTitle();
    descendingRate.pop();
    }
    qDebug()<<"======";
}
void Newsbasedon::on_pushButton_back_clicked()
{
    hide();
    HomePage *hp=new HomePage(this);
    hp->show();
}

void Newsbasedon::on_pushButton_showTitle_clicked()
{
    ui->label_3->show();
    ui->comboBox->show();
    ui->pushButton_2->show();
   for(int i=0;i<TitlesOfCategory.size();i++){
        ui->comboBox->addItem(TitlesOfCategory[i]);
    }
   for(auto it:TitlesOfCategory){
   TitlesOfCategory.pop_back();
   }
}
void Newsbasedon::selectTitleToCategory(){
    if(checked[1]){
    for(int i=0;i<Adminx::news.size();i++){
        if(currentTitle==Adminx::news[i].getTitle()&&currentCat==Adminx::news[i].getCategory()){
            currentNew=i;
        }
    }
    qDebug()<<"currenttitle = "<<currentTitle;
    qDebug()<<"index = "<<currentNew;
    }
    else if(checked[0]||checked[2]||checked[3]){
        for(int i=0;i<Adminx::news.size();i++){
            if(currentCat==Adminx::news[i].getTitle()){
                currentNew=i;
            }
        }
    qDebug()<<"currenttitle = "<<currentCat;
    qDebug()<<"index = "<<currentNew;
    }
}
void Newsbasedon::on_pushButton_Rate_clicked()
{
    ui->pushButton_descendingRate->hide();
    ui->pushButton_Category->hide();
    ui->pushButton_Time->hide();
    checked[0]=true;
    checked[1]=false;
    checked[2]=false;
    checked[3]=false;
    ShowNewBasedOnRating();
    if(ui->CaegoryList->itemText(ui->CaegoryList->currentIndex()).isEmpty()){
        ui->CaegoryList->removeItem(ui->CaegoryList->currentIndex());
    }
    if(ui->CaegoryList->itemText(ui->CaegoryList->currentIndex()).isEmpty()){
        ui->CaegoryList->removeItem(ui->CaegoryList->currentIndex());
    }
}

void Newsbasedon::PushTitlesIntoComboBox(){
    if(checked[1]){
        TitlesOfCategory.clear();
    ui->lineEdit->setText(ui->CaegoryList->currentText());
    currentCat=ui->lineEdit->text().toStdString();
    for(int i=0;i<Adminx::news.size();i++){
        if(currentCat==Adminx::news[i].getCategory()){
            TitlesOfCategory.push_back(Adminx::news[i].getTitle().c_str());
        }
    }
    for(auto it:TitlesOfCategory){
        qDebug()<<it;
    }
    ui->comboBox->clear();
    }
    else if(checked[0]||checked[3]){
        ui->label_5->setText("Selected Title");
        ui->lineEdit->setText(ui->CaegoryList->currentText());
        currentCat=ui->lineEdit->text().toStdString();
    }
    else if(checked[2]){
        TitlesOfCategory.clear();
        ui->label_5->setText("Selected Title");
        ui->lineEdit->setText(ui->CaegoryList->currentText());
        currentCat=ui->lineEdit->text().toStdString();
    }
}
void Newsbasedon::on_pushButton_clicked()
{
    if(checked[1]){
    ui->label_5->show();
    ui->lineEdit->show();
    ui->pushButton_showTitle->show();
    }
    else if(checked[0]||checked[3]){
        ui->label_5->show();
        ui->lineEdit->show();
            ui->pushButton_showNew->show();
    }
    else if(checked[2]){
        ui->label_5->show();
        ui->lineEdit->show();
        ui->pushButton_showNew->show();
    }

    PushTitlesIntoComboBox();
}


void Newsbasedon::on_pushButton_2_clicked()
{
    ui->label_7->show();
    ui->lineEdit_2->show();
    ui->pushButton_showNew->show();
    ui->lineEdit_2->setText(ui->comboBox->currentText());
    currentTitle=ui->lineEdit_2->text().toStdString();
}




void Newsbasedon::on_pushButton_Time_clicked()
{

    ui->pushButton_Category->hide();
    ui->pushButton_Rate->hide();
    ui->pushButton_descendingRate->hide();
    checked[2]=true;
    checked[1]=false;
    checked[0]=false;
    checked[3]=false;
    ShowNewBasedOnDate();
    if(ui->CaegoryList->itemText(ui->CaegoryList->currentIndex()).isEmpty()){
        ui->CaegoryList->removeItem(ui->CaegoryList->currentIndex());
    }
    if(ui->CaegoryList->itemText(ui->CaegoryList->currentIndex()).isEmpty()){
        ui->CaegoryList->removeItem(ui->CaegoryList->currentIndex());
    }
}
void Newsbasedon::ShowNewBasedOnDate(){
    ui->CaegoryList->clear();
    ui->CaegoryList->show();
    ui->label_4->show();
    ui->pushButton->show();
    for(int i=Adminx::news.size()-1;i>=0;i--){
        if(Adminx::news[i].getAvgRate()>=2||Adminx::news[i].getAvgRate()==0){
            TitlesOfCategory.push_back(Adminx::news[i].getTitle().c_str());
        }
    }
    for(auto it:TitlesOfCategory){
        qDebug()<<"news : "<<it;
    }
    for(int i=0;i<TitlesOfCategory.size();i++){
        ui->CaegoryList->addItem(TitlesOfCategory[i]);
    }
    PushTitlesIntoComboBox();
}


void Newsbasedon::on_pushButton_descendingRate_clicked()
{
    ui->pushButton_Category->hide();
    ui->pushButton_Time->hide();
    ui->pushButton_Rate->hide();
    checked[3]=true;
    checked[0]=false;
    checked[1]=false;
    checked[2]=false;
    ShowNewBasedOnDescendingRating();
    if(ui->CaegoryList->itemText(ui->CaegoryList->currentIndex()).isEmpty())
        ui->CaegoryList->removeItem(ui->CaegoryList->currentIndex());

}
void Newsbasedon:: ShowNewBasedOnDescendingRating(){
    ui->label_4->show();
    ui->CaegoryList->show();
    ui->pushButton->show();
    ui->CaegoryList->clear();
    multimap<double,NewsModel>New;
    for(int i=0;i<Adminx::news.size();i++){
        New.insert({Adminx::news[i].getAvgRate(),Adminx::news[i]});
    }
    stack<NewsModel>newsDescendingOrder;
    for(auto t:New){
        if (t.second.getAvgRate()>=2)
            newsDescendingOrder.push(t.second);
    }
    int newsCount=newsDescendingOrder.size();
    for(int i=0;i<newsCount;i++){
        trendingNews=newsDescendingOrder.top().getTitle();
        ui->CaegoryList->addItem(trendingNews.c_str());
        qDebug()<< newsDescendingOrder.top().getTitle();
        newsDescendingOrder.pop();
    }
    qDebug()<<"======";
}
void Newsbasedon::on_pushButton_showNew_clicked()
{
    if(currentCat!=""){
        selectTitleToCategory();
        hide();
        News*n=new News(this);
        n->show();
        n->displayNew();

    }
    else{
        QMessageBox::information(this,"Error","You Must Select Category and Title");
    }

}
