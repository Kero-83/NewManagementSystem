#include "news.h"
#include "ui_news.h"
#include"newsbasedon.h"
#include"admin.h"

News::News(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::News)
{
    ui->setupUi(this);
}

News::~News()
{
    delete ui;
}
double News::RateAverage(double rate)
{

    average=(average*rateCount+rate)/(rateCount+1) ;
     rateCount++ ;
    return average ;
}
void News::displayNew(){
    Newsbasedon n;
    int i=n.selectTitleToCategory();
    ui->lineEdit_Category->setText(Admin::news[i].getCategory().c_str());
    ui->lineEdit_Title->setText(Admin::news[i].getTitle().c_str());
    ui->lineEdit_Description->setText(Admin::news[i].getDescription().c_str());
    ui->lineEdit_Date->setText(Admin::news[i].getDate().c_str());
}
void News::on_pushButton_clicked()
{
    hide();
    Newsbasedon *w=new Newsbasedon();
    w->show();
}

