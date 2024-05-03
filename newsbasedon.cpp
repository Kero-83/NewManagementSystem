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
     ui->label_2->hide() ;
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->lineEdit->hide();
    ui->lineEdit_2->hide();
    ui->CaegoryList->hide();
    ui->comboBox->hide();
    ui->pushButton->hide();
    ui->pushButton_2->hide();
    ui->pushButton_showNew->hide();
    ui->pushButton_showTitle->hide();
}
//bool flag;
string q;
 vector<QString>tite;
Newsbasedon::~Newsbasedon()
{
    delete ui;
}

void Newsbasedon::on_pushButton_Category_clicked()
{
    checked[1]=true;
    checked[0]=false;
    checked[2]=false;
    ui->pushButton_Rate->hide();
    ui->pushButton_Time->hide();
    ui->label_2->show();
    ui->CaegoryList->show();
    ui->pushButton->show();
    //ui->CaegoryList->clear();
    //ui->comboBox->clear();
   // ui->CaegoryList->show();
    //ui->showNew->show();
    ShowNewBasedOnCategory();
}
void Newsbasedon::RemoveDublicates(){
     QSet<string>uniqueItems;
    int itemCount=ui->CaegoryList->count();
    for(int i=0;i<itemCount;++i){
        QString itemText=ui->CaegoryList->itemText(i);
        if(uniqueItems.contains(itemText.toStdString())){
            ui->CaegoryList->removeItem(i);
            --itemCount;
            --i;
        }
        else{
            uniqueItems.insert(itemText.toStdString());
        }
    }
}
void Newsbasedon::ShowNewBasedOnCategory(){
    ui->CaegoryList->clear();

    for(int i=0;i<Admin::news.size();i++){
        if(Admin::news[i].getAvgRate()>2){
        ui->CaegoryList->addItem(Admin::news[i].getCategory().c_str());
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
    for(int i=0;i<Admin::news.size();i++){
        New.insert({Admin::news[i].getAvgRate(),Admin::news[i]});
    }
    stack<NewsModel>n;
    for(auto t:New){
    if (t.second.getAvgRate()>3.5)
        n.push(t.second);
    }
    int x=n.size();
    for(int i=0;i<x;i++){
     q=n.top().getTitle();
    ui->CaegoryList->addItem(q.c_str());
     qDebug()<< n.top().getTitle();
    n.pop();
    }
    qDebug()<<"======";
}
void Newsbasedon::on_pushButton_back_clicked()
{
    hide();
    HomePage *hp=new HomePage(this);
    hp->show();
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


void Newsbasedon::on_pushButton_showTitle_clicked()
{
    ui->label_3->show();
    ui->comboBox->show();
    ui->pushButton_2->show();
   // ui->comboBox->show();
   // ui->comboBox->clear();
   // ui->label_2->show();
   // qDebug()<<ui->CaegoryList->currentText();
   for(int i=0;i<tite.size();i++){
        ui->comboBox->addItem(tite[i]);
    }
   for(auto it:tite){
   tite.pop_back();
   }
}
void Newsbasedon::selectTitleToCategory(){
    if(checked[1]){
    for(int i=0;i<Admin::news.size();i++){
        if(currentTitle==Admin::news[i].getTitle()&&currentCat==Admin::news[i].getCategory()){
            index=i;
        }
    }
    qDebug()<<"currenttitle = "<<currentTitle;
    qDebug()<<"index = "<<index;
    }
    else if(checked[0]||checked[2]){
        for(int i=0;i<Admin::news.size();i++){
            if(currentCat==Admin::news[i].getTitle()){
                index=i;
            }
        }
    qDebug()<<"currenttitle = "<<currentCat;
    qDebug()<<"index = "<<index;
    }
}
void Newsbasedon::on_pushButton_Rate_clicked()
{
    ui->pushButton_Category->hide();
    ui->pushButton_Time->hide();
    checked[0]=true;
    checked[1]=false;
    checked[2]=false;
    //ui->CaegoryList->show();
   // ui->showNew->show();
   // ui->CaegoryList->clear();
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
        tite.clear();
    ui->lineEdit->setText(ui->CaegoryList->currentText());
    currentCat=ui->lineEdit->text().toStdString();
    for(int i=0;i<Admin::news.size();i++){
        if(currentCat==Admin::news[i].getCategory()){
            tite.push_back(Admin::news[i].getTitle().c_str());
        }
    }
    for(auto it:tite){
        qDebug()<<it;
    }
    ui->comboBox->clear();
    }
    else if(checked[0]){
        ui->label_5->setText("Selected Title");
        ui->lineEdit->setText(ui->CaegoryList->currentText());
        currentCat=ui->lineEdit->text().toStdString();
    }
    else if(checked[2]){
        tite.clear();
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
    else if(checked[0]){
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
    ui->label_6->show();
    ui->lineEdit_2->show();
    ui->pushButton_showNew->show();
    ui->lineEdit_2->setText(ui->comboBox->currentText());
    currentTitle=ui->lineEdit_2->text().toStdString();
}




void Newsbasedon::on_pushButton_Time_clicked()
{

    ui->pushButton_Category->hide();
    ui->pushButton_Rate->hide();
    checked[2]=true;
    checked[1]=false;
    checked[0]=false;
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
    for(int i=Admin::news.size()-1;i>=0;i--){
        if(Admin::news[i].getAvgRate()>2){
            tite.push_back(Admin::news[i].getTitle().c_str());
        }
    }
    for(auto it:tite){
        qDebug()<<"news : "<<it;
    }
    for(int i=0;i<tite.size();i++){
        ui->CaegoryList->addItem(tite[i]);
    }
    PushTitlesIntoComboBox();
}

