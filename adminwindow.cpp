#include "adminwindow.h"
#include "ui_adminwindow.h"
#include"newsbasedon.h"
#include"admin.h"
Adminwindow::Adminwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Adminwindow)
{
    ui->setupUi(this);
    ui->Add_Categ->hide() ;
    ui->Category_text->hide() ;
    ui->New_text->hide() ;
    ui->Remove_Categ->hide() ;
    ui->Remove_New->hide() ;
    ui->Add_New->hide() ;
    ui->Add_c_ok->hide() ;
    ui->remove_c_ok->hide() ;
    ui->remove_new_ok->hide() ;
    ui->Add_new_ok->hide() ;

}

Adminwindow::~Adminwindow()
{
    delete ui;
}

void Adminwindow::on_Add_remove_category_clicked()
{
    ui->Add_Categ->show() ;
    ui->Remove_Categ->show() ;
}


void Adminwindow::on_Add_Categ_clicked()
{
    ui->Category_text->show() ;
    ui->Add_c_ok->show() ;
}


void Adminwindow::on_Remove_Categ_clicked()
{
     ui->Category_text->show() ;
    ui->remove_c_ok->show() ;
}


void Adminwindow::on_Add_Remove_new_clicked()
{
    ui->Add_New->show() ;
    ui->Remove_New->show() ;
}


void Adminwindow::on_Add_New_clicked()
{
    ui->New_text->show() ;
    ui->Add_new_ok->show() ;
}



void Adminwindow::on_Remove_New_clicked()
{
     ui->New_text->show() ;
    ui->remove_new_ok->show() ;
}


void Adminwindow::on_pushButton_clicked()
{
    hide();
    Newsbasedon *h =new Newsbasedon;
    h->show();
}



void Adminwindow::on_Add_c_ok_clicked()
{
    Admin::AddCategoy_New[ui->Category_text->text().toStdString()]={NULL} ;
}



void Adminwindow::on_remove_c_ok_clicked()
{
    Admin::AddCategoy_New.erase(ui->Category_text->text().toStdString());
}

