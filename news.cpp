#include "news.h"
#include "ui_news.h"

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
