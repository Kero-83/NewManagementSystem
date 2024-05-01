#include "homepage.h"
#include "ui_homepage.h"
#include "login.h" // Make sure to include the header for Login
#include"myprofile.h"
#include"newsbasedon.h"

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

void HomePage::setUserId(int userId){
    this->userId = userId;
}
void HomePage::show_window(){
    show();
}
void HomePage::close_window(){
    close();
}
HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_back_clicked()
{
    hide();
    Login *log=new Login(this);
    log->show();
}
void HomePage::on_pushButton_clicked()
{
    hide();
    MyProfile*profile=new MyProfile(this);
    profile->show();
    profile->DisplayData();
}


void HomePage::on_pushButton_2_clicked()
{
    Newsbasedon *newsbasedon=new Newsbasedon(this) ;\
        hide() ;
    newsbasedon->show() ;
}

