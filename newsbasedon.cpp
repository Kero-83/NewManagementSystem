#include "newsbasedon.h"
#include "ui_newsbasedon.h"

Newsbasedon::Newsbasedon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Newsbasedon)
{
    ui->setupUi(this);
    ui->CaegoryList->hide() ;
    ui->OK->hide() ;
}

Newsbasedon::~Newsbasedon()
{
    delete ui;
}

void Newsbasedon::on_Category_clicked()
{
    ui->CaegoryList->show() ;
    ui->OK->show();
}


// void Newsbasedon::on_Rate_clicked()
// {

// }

