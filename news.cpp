#include "news.h"
#include "homepage.h"
#include "ui_news.h"
#include"newsbasedon.h"
#include"adminx.h"
#include"qmessagebox.h"
#include"login.h"
#include"stdafx.h"

News::News(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::News)
{
    ui->setupUi(this);
    ui->pushButton_saveNewAdmin->hide();
    ui->pushButton_editDesc->hide();
    ui->pushButton_editTitle->hide();
    ui->lineEdit->show();
}
string h;
bool f=false;
News::~News()
{
    delete ui;
}
double News::RateAverage(double rate)
{
    average=(average*rateCount+rate)/(rateCount+1);
     rateCount++;
    return average;
}
void News::displayNew(){
    ui->pushButton_2->hide();
    ui->lineEdit_Category->setText(Adminx::news[Newsbasedon::index].getCategory().c_str());
    ui->lineEdit_Title->setText(Adminx::news[Newsbasedon::index].getTitle().c_str());
    ui->lineEdit_Description->setText(Adminx::news[Newsbasedon::index].getDescription().c_str());
    ui->lineEdit_Date->setText(Adminx::news[Newsbasedon::index].getDate().c_str());
    for(auto it:favNews){
        if(it.first==Login::count){
            for(int i=0;i<it.second.size();i++){
                if(ui->lineEdit_Title->text()==it.second[i].c_str())
                    ui->checkBox_favNews->setChecked(true);
                }
            }
        }
     for(auto it:User::Rates)
        {
             if(it.first.first==Login::count)
        {
            if(it.first.second==Adminx::news[Newsbasedon::index].getTitle())
                {
                     string rate=to_string(it.second);
                    ui->lineEdit->show();
                    ui->lineEdit->setText(rate.c_str());
                    ui->lineEdit->setEnabled(false);
                ui->pushButton_2->show();
                    ui->pushButton_saveRate->hide();
                 }
        }
        }
}
void News::on_pushButton_clicked()
{
    if(Adminx::backbuttons[0]){
    hide();
    Newsbasedon *w=new Newsbasedon();
    w->show();
    }
    else if(Adminx::backbuttons[1]){
        HomePage*h=new HomePage(this);
        hide();
        h->show();
    }
    else if(Adminx::backbuttons[2]){
        Adminx *a=new Adminx(this);
        hide();
        a->show();
    }
    else if(Adminx::backbuttons[3]){
        Search *s=new Search(this);
        hide();
        s->show();
    }
}
void News::AddNew(){
    ui->pushButton_2->hide();
    ui->pushButton_saveRate->hide();
    ui->lineEdit->hide();
    ui->checkBox_favNews->hide();
    ui->label_4->hide();
    NewsModel n;
    string date=n.getCurrentDate();
    ui->lineEdit_Date->setText(date.c_str());
    ui->lineEdit_Title->setEnabled(true);
    ui->lineEdit_Category->setText(Adminx::NewCat.c_str());
    ui->lineEdit_Description->setEnabled(true);
    ui->pushButton_saveNewAdmin->show();
    qDebug()<<Adminx::NewCat;
}
bool News::checkValidateOfTitle()
{
    for(int i=0;i<Adminx::news.size();i++){
        if(ui->lineEdit_Title->text().toStdString()==Adminx::news[i].getTitle())

        return true;
    }
    return false;
}
 void News::on_pushButton_saveNewAdmin_clicked()
 {
     if(Adminx::checkedAdmin[0]){
         if(ui->lineEdit_Category->text()=="\0"||ui->lineEdit_Title->text()=="\0"||ui->lineEdit_Description->text()=="\0"){
             QMessageBox::warning(this,"Error","Please fill the data");
         }
         else if(ui->lineEdit_Category->text()==ui->lineEdit_Title->text()){
             QMessageBox::warning(this,"Error","Category and Title can't have same name ");
         }
         else if(checkValidateOfTitle()){
             QMessageBox::warning(this,"error","this Title Name is already Exist");
         }
         else{
             QMessageBox::information(this,"Success","New Added");
             string newCategory=ui->lineEdit_Category->text().toStdString();
             string newTitle=ui->lineEdit_Title->text().toStdString();
             string newDescription=ui->lineEdit_Description->text().toStdString();
             string newDate=ui->lineEdit_Date->text().toStdString();
             NewsModel::addnew(NewsModel(newTitle,newDescription,newDate,newCategory,0.0));
             for(auto it:Adminx::news){
                 qDebug()<<it.getCategory()<<" "<<it.getTitle();
             }
         }

     }
     else if(Adminx::checkedAdmin[1]){
             if(ui->lineEdit_Title->text()=="\0"||ui->lineEdit_Description->text()=="\0"){
             QMessageBox::warning(this,"Error","Please fill the data");
                 }
             else if(checkValidateOfTitle()){
                 QMessageBox::warning(this,"error","this Title Name is already Exist");
                     qDebug
                     ()<<"error";
             }
                 else{
                     QMessageBox::information(this,"success","New Updated !");
                     string NewTitle=ui->lineEdit_Title->text().toStdString();
                     Adminx::news[Newsbasedon::index].setTitle(NewTitle);
                     string NewDesc=ui->lineEdit_Description->text().toStdString();
                     Adminx::news[Newsbasedon::index].setDescription(NewDesc);
                      qDebug()<<Adminx::news[Newsbasedon::index].getTitle()<<Adminx::news[Newsbasedon::index].getDescription();
                      qDebug()<<"==============";
                     for(auto it:Adminx::news){
                          qDebug()<<it.getTitle()<<it.getDescription();
                      }

             hide();
             Adminx *x=new Adminx(this);
             x->show();
         }
     }
     }
     void News:: showEditButtons(){
         ui->pushButton_editDesc->show();
         ui->pushButton_editTitle->show();
         ui->pushButton_saveNewAdmin->show();
         ui->checkBox_favNews->hide();
         ui->label_4->hide();
         ui->lineEdit->hide();
         ui->pushButton_2->hide();
         ui->pushButton_saveRate->hide();
     }
     void News::on_pushButton_editTitle_clicked()
     {
         ui->lineEdit_Title->setEnabled(true);
     }
     void News::on_pushButton_editDesc_clicked()
     {
         ui->lineEdit_Description->setEnabled(true);
     }


     void News::on_checkBox_favNews_clicked(bool checked)
     {
         bool check=ui->checkBox_favNews->isChecked();
         if(check){
             favNews[Login::count].push_back(Adminx::news[Newsbasedon::index].getTitle());
             QMessageBox::information(this,"Success","New Added to ur Favourite News");
         }
             else if(!check)
         {
              for(auto it:favNews)
             {
                  if(it.first==Login::count)
                  {
                      for(int i=0;i<it.second.size();i++)
                      {
                          if(ui->lineEdit_Title->text()==it.second[i].c_str())
                          {
                             favNews[it.first].erase(favNews[it.first].begin()+i);
             qDebug()<<Adminx::news[Newsbasedon::index].getTitle();
             QMessageBox::information(this,"Success","New Removed from ur Favourite News");
                          }
                      }
                  }
              }
         }
     }
     void News::checkRate(){
           int Rate;
         h=ui->lineEdit->text().toStdString();
           Rate=stoi(h);
           if(Rate>=1&&Rate<=5){

             User::Rates[make_pair(Login::count,Adminx::news[Newsbasedon::index].getTitle())]=Rate;
              if(f){
             QMessageBox::information(this,"Success","Rate Added !");
             ui->lineEdit->setEnabled(false);
              }
         }
          else{
              QMessageBox::warning(this,"Error","please Entre number between 1 and 5");
          }
          for(auto it:User::Rates){
              qDebug()<<it.first.first<<it.first.second<<it.second;

          }
          qDebug()<<"========";
     }
     void News::on_pushButton_saveRate_clicked()
     {
        f=true;
        checkRate();
        // Logic of Calculation of New Rate
        int rate = stoi(ui->lineEdit->text().toStdString());
        if(rate <= 5 && rate >= 1)
        {
            calcRate(rate, Adminx::news[Newsbasedon::index]);
        }
     }
     void News::on_pushButton_2_clicked()
     {
         f=false;
         checkRate();
          ui->lineEdit->setEnabled(true);
         ui->pushButton_saveRate->show();
         ui->pushButton_2->hide();
         // // Logic of Calculation of Edit Rate
         // int rate = stoi(ui->lineEdit->text().toStdString());
         // if(rate <= 5 && rate >= 1)
         // {
         //     calcRate(rate, Adminx::news[Newsbasedon::index]);
         // }
}


void News::calcRate(int rate, NewsModel& newsModel)
{
    int id = Login::count;
    if(!newsModel.rates.count(id))
    {
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
        newsModel.rates[id] = rate;
        newsModel.avgRate = ((newsModel.avgRate * (newsModel.rates.size() - 1)) + rate) / newsModel.rates.size();
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
    }
    else
    {
        // avgRate = (new rate - old rate) / size
        // then we assign new rate to map: rates[id] = rate;
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
        newsModel.avgRate += double( rate - newsModel.rates[id]) / double(newsModel.rates.size());
        qDebug() << rate <<' ' << id << ' ' << newsModel.rates[id] << newsModel.rates.size() << '\n';
        newsModel.rates[id] = rate;
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
    }

}


