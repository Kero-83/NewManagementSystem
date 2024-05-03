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
    average=(average*rateCount+rate)/(rateCount+1);
     rateCount++;
    return average;
}
void News::displayNew(){
    ui->lineEdit_Category->setText(Admin::news[Newsbasedon::index].getCategory().c_str());
    ui->lineEdit_Title->setText(Admin::news[Newsbasedon::index].getTitle().c_str());
    ui->lineEdit_Description->setText(Admin::news[Newsbasedon::index].getDescription().c_str());
    ui->lineEdit_Date->setText(Admin::news[Newsbasedon::index].getDate().c_str());
}
void News::on_pushButton_clicked()
{
    hide();
    Newsbasedon *w=new Newsbasedon();
    w->show();
}

