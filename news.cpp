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
    ui->pushButton_editCategory->hide();
    ui->lineEdit->show();
}
string RatefromUser;
bool checkEditTitle=false;
bool checkEditCategory=false;
bool flag=false;
News::~News()
{
    delete ui;
}
void News::displayNew(){
    ui->pushButton_2->hide();
    ui->lineEdit_Category->setText(Adminx::news[Newsbasedon::currentNew].getCategory().c_str());
    ui->plainTextEdit_Title->setPlainText(Adminx::news[Newsbasedon::currentNew].getTitle().c_str());
    ui->plainTextEdit_Description->setPlainText(Adminx::news[Newsbasedon::currentNew].getDescription().c_str());
    ui->lineEdit_Date->setText(Adminx::news[Newsbasedon::currentNew].getDate().c_str());
    for(auto it:favNews){
        if(it.first==Login::UserID){
            for(int i=0;i<it.second.size();i++){
                if(ui->plainTextEdit_Title->toPlainText()==it.second[i].c_str())
                    ui->checkBox_favNews->setChecked(true);
            }
        }
    }
    for(auto it:User::Rates)
    {
        if(it.first.first==Login::UserID)
        {
            if(it.first.second==Adminx::news[Newsbasedon::currentNew].getTitle())
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
    NewsModel getCurrentdate;
    string date=getCurrentdate.getCurrentDate();
    ui->lineEdit_Date->setText(date.c_str());
    ui->plainTextEdit_Title->setEnabled(true);
    ui->lineEdit_Category->setText(Adminx::NewCat.c_str());
    ui->plainTextEdit_Description->setEnabled(true);
    ui->pushButton_saveNewAdmin->show();
    qDebug()<<Adminx::NewCat;
}
bool News::checkValidateOfTitle()
{
    for(int i=0;i<Adminx::news.size();i++){
        if(ui->plainTextEdit_Title->toPlainText().toStdString()==Adminx::news[i].getTitle())

        return true;
    }
    return false;
}
bool News::checkValidateOfCategory()
{
    for(int i=0;i<Adminx::news.size();i++){
        if(ui->lineEdit_Category->text().toStdString()==Adminx::news[i].getCategory())

        return true;
    }
    return false;
}
void News::on_pushButton_saveNewAdmin_clicked()
{
    if(Adminx::checkedAdmin[0]){
        //addnew
        if(ui->lineEdit_Category->text()=="\0"||ui->plainTextEdit_Title->toPlainText()=="\0"||ui->plainTextEdit_Description->toPlainText()=="\0"){
            QMessageBox::warning(this,"Error","Please fill the data");
        }
        else if(ui->lineEdit_Category->text()==ui->plainTextEdit_Title->toPlainText()){
            QMessageBox::warning(this,"Error","Category and Title can't have same name ");
        }
        else if(checkValidateOfTitle()){
            QMessageBox::warning(this,"error","this Title Name is already Exist");
        }
        else{
            QMessageBox::information(this,"Success","New Added");
            string newCategory=ui->lineEdit_Category->text().toStdString();
            string newTitle=ui->plainTextEdit_Title->toPlainText().toStdString();
            string newDescription=ui->plainTextEdit_Description->toPlainText().toStdString();
            string newDate=ui->lineEdit_Date->text().toStdString();
            NewsModel::addnew(NewsModel(newTitle,newDescription,newDate,newCategory,0.0));
            for(auto it:Adminx::news){
                qDebug()<<it.getCategory()<<" "<<it.getTitle();
            }
        }
    }
    else if(Adminx::checkedAdmin[1]){
        //update New
        if(ui->plainTextEdit_Title->toPlainText()=="\0"||ui->plainTextEdit_Description->toPlainText()=="\0"||ui->lineEdit_Category->text()=="\0"){
            QMessageBox::warning(this,"Error","Please fill the data");
        }
        else if(checkValidateOfTitle()&&checkEditTitle){
            QMessageBox::warning(this,"error","this Title Name is already Exist");
            qDebug ()<<"error";
        }
        else if(!checkValidateOfCategory()&&checkEditCategory){
            QMessageBox::warning(this,"error","this Category Name doesn't Exist, Please Add it");
            qDebug ()<<"error";
        }
        else{
            checkEditTitle=false;
            checkEditCategory=false;
            QMessageBox::information(this,"success","New Updated !");
            string NewTitle=ui->plainTextEdit_Title->toPlainText().toStdString();
            Adminx::news[Newsbasedon::currentNew].setTitle(NewTitle);
            string NewDesc=ui->plainTextEdit_Description->toPlainText().toStdString();
            Adminx::news[Newsbasedon::currentNew].setDescription(NewDesc);
            string NewCat=ui->lineEdit_Category->text().toStdString();
            Adminx::news[Newsbasedon::currentNew].setCategory(NewCat);
            qDebug()<<Adminx::news[Newsbasedon::currentNew].getTitle()<<Adminx::news[Newsbasedon::currentNew].getDescription();
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
    ui->pushButton_editCategory->show();
    ui->pushButton_saveNewAdmin->show();
    ui->checkBox_favNews->hide();
    ui->label_4->hide();
    ui->lineEdit->hide();
    ui->pushButton_2->hide();
    ui->pushButton_saveRate->hide();
}
void News::on_pushButton_editTitle_clicked()
{
    checkEditTitle=true;
    ui->plainTextEdit_Title->setEnabled(true);
}
void News::on_pushButton_editDesc_clicked()
{
    ui->plainTextEdit_Description->setEnabled(true);
}
void News::on_pushButton_editCategory_clicked()
{
    checkEditCategory=true;
    ui->lineEdit_Category->setEnabled(true);
}
void News::on_checkBox_favNews_clicked(bool checked)
{
    bool checkFavNews=ui->checkBox_favNews->isChecked();
    if(checkFavNews){
        favNews[Login::UserID].push_back(Adminx::news[Newsbasedon::currentNew].getTitle());
        QMessageBox::information(this,"Success","New Added to ur Favourite News");
    }
    else if(!checkFavNews)
    {
        for(auto it:favNews)
        {
            if(it.first==Login::UserID)
            {
                for(int i=0;i<it.second.size();i++)
                {
                    if(ui->plainTextEdit_Title->toPlainText()==it.second[i].c_str())
                    {
                        favNews[it.first].erase(favNews[it.first].begin()+i);
                        qDebug()<<Adminx::news[Newsbasedon::currentNew].getTitle();
                        QMessageBox::information(this,"Success","New Removed from ur Favourite News");
                    }
                }
            }
        }
    }
}
void News::checkRate(){
    int Rate;
    RatefromUser=ui->lineEdit->text().toStdString();
    if(RatefromUser>="1"&&RatefromUser<="5"){
        Rate=stoi(RatefromUser);
        User::Rates[make_pair(Login::UserID,Adminx::news[Newsbasedon::currentNew].getTitle())]=Rate;
        calcRate(Rate, Adminx::news[Newsbasedon::currentNew]);
        if(flag){
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
    flag=true;
    checkRate();
}
void News::on_pushButton_2_clicked()
{
    flag=false;
    checkRate();
    ui->lineEdit->setEnabled(true);
    ui->pushButton_saveRate->show();
    ui->pushButton_2->hide();
}


void News::calcRate(int rate, NewsModel& newsModel)
{
    int id = Login::UserID;
    if(!newsModel.rates.count(id))
    {
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
        newsModel.rates[id] = rate;
        newsModel.avgRate = ((newsModel.avgRate * (newsModel.rates.size() - 1)) + rate) / newsModel.rates.size();
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
    }
    else
    {

        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
        newsModel.avgRate += double( rate - newsModel.rates[id]) / double(newsModel.rates.size());
        qDebug() << rate << ' ' << id << ' ' << newsModel.rates[id] << ' ' << newsModel.rates.size() << '\n';
        newsModel.rates[id] = rate;
        qDebug() << newsModel.avgRate << ' ' << newsModel.rates.size() << '\n';
    }

}




