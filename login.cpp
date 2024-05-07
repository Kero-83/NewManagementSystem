#include "login.h"
#include "./ui_login.h"
#include"homepage.h"
#include"QMessageBox"
#include "user.h"
#include"news.h"
using namespace std;
Login::Login(QWidget *parent)
    :QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    connect(ui->pushButton_CreateAccount,&QPushButton::clicked,sign,&SignUP::show_window);
    connect(ui->pushButton_CreateAccount,&QPushButton::clicked,this,&Login::close_window);

}
Login::~Login()
{
    delete ui;
}
void Login::close_window(){
    close();
}
void Login::show_window(){
    show();
}
bool Login::write_Data(){
    if(ui->lineEdit_username->text()=="\0"||ui->lineEdit_password->text()=="\0")
        return true;
    return false;
}
bool Login::Log_Admin(){
    if(ui->lineEdit_username->text()=="admin"&&ui->lineEdit_password->text()=="admin"){
         QMessageBox::information(this,"Login Success","Welcome Admin");
        hide();
        Adminx *adminWindow=new Adminx(this);
        adminWindow->show();
    return true;
    }
    return false;
}
void Login::on_pushButton_Exit_clicked()
{
    ad.WriteInFiles();
    close();
}
void Login::on_pushButton_Login_clicked(){
    for(int i=0;i<Adminx::news.size();i++){
        qDebug()<<Adminx::news[i].getTitle()<<""<<Adminx::news[i].getCategory();
    }
    if(Log_Admin()){
        return;
    }
     bool flag=false;
    bool check=write_Data();
     if(check){
        QMessageBox::warning(this,"login failed","Please fill the requirement data");
    }
     else{
    for( int i=0;i<Adminx::users.size();i++){
         if(ui->lineEdit_username->text().toStdString() ==Adminx::users[i].getUsername() &&ui->lineEdit_password->text().toStdString()==Adminx::users[i].getPassword())
        {
  QMessageBox::information(this, "", "in");
             count=i;
             flag=true;
             break;
        }
    }

    if(flag){

        HomePage *HP=new HomePage;
             connect(ui->pushButton_Login,&QPushButton::clicked,HP,&HomePage::show_window);
             connect(ui->pushButton_Login,&QPushButton::clicked,this,&Login::close_window);
             qDebug()<<count;
     }
      else{
          QMessageBox::warning(this, "Registration Error", "incorrect username or password.");
     }
    }
}
