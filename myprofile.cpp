#include "myprofile.h"
#include "homepage.h"
#include "ui_myprofile.h"
#include"login.h"
#include"stdafx.h"

MyProfile::MyProfile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MyProfile)
{
    ui->setupUi(this);
}

MyProfile::~MyProfile()
{
    delete ui;
}
void MyProfile::DisplayData(){
    string firstname=Adminx::users[Login::count].getFirstName();
    string lastname=Adminx::users[Login::count].getLastName();
    string username=Adminx::users[Login::count].getUsername();
    string password=Adminx::users[Login::count].getPassword();
    string email=Adminx::users[Login::count].getEmail();
    ui->label_3->setText(username.c_str());
    ui->label_5->setText(password.c_str());
    ui->label_7->setText(email.c_str());
    ui->label_9->setText(firstname.c_str());
    ui->label_11->setText(lastname.c_str());
    qDebug()<<firstname;
}

void MyProfile::on_pushButton_clicked()
{
    hide();
    HomePage*H=new HomePage(this);
    H->show();
}

