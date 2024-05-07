#include "signup.h"
#include "ui_signup.h"
#include"login.h"
#include"QMessageBox"
#include"user.h"
User *user = NULL;
SignUP::SignUP(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUP)
{
    ui->setupUi(this);


}
SignUP::~SignUP()
{
    delete ui;
}
void SignUP::show_window(){
    show();
}
void SignUP::close_window(){
    close();
}


bool SignUP::_validEmail(String email)
{
    int atOccur = 0;
    int i = 0;
    for(auto &ch : email)
    {
        i++;
        if(ch == '@'){
            string validGmail = email.substr(i, email.size());
            if(validGmail == "gmail.com")
                return true;
            return false;
        }
    }
    return false;
}
bool SignUP::_validUsername_email(String username,String email){
    for( int i=0;i<Adminx::users.size();i++){
        if(username==Adminx::users[i].getUsername()||email==Adminx::users[i].getEmail())
            return true;
    }
    return false;
}
void SignUP::_validation(){
    bool check;
    if(ui->lineEdit_firstname->text()=="\0"||ui->lineEdit_lastname->text()=="\0"||ui->lineEdit_username->text()=="\0"||ui->lineEdit_password->text()=="\0" || ui->lineEdit_region->text() == "\0"||ui->lineEdit_email->text()=="\0"){
        QMessageBox::warning(this, "Registration Error", "Please fill in all the required fields.");
    }
    else if(!_validEmail(email.toStdString())){
        QMessageBox::warning(this, "Registration Error", "Email not valid");
    }
    else if(firstname==username||firstname==password||lastname==username||lastname==password||username==password){
        QMessageBox::warning(this, "Registration Error", "Can't use same characters in fields.");
    }
    else if(ui->lineEdit_repassword->text()!=password){
        QMessageBox::warning(this,"Registration Error","Password must be Equal");
    }
    else{
         check=_validUsername_email(username.toStdString(),email.toStdString());
        if(check){
             QMessageBox::warning(this,"Registration Error","Data is already Exist");
         }
        else{
        QMessageBox::information(this, "Registration Success", "Account created successfully..pls sign in!");
        Login*log=new Login(this);
        User::addUser(User(firstname.toStdString(),lastname.toStdString(),username.toStdString(), password.toStdString(), email.toStdString()));
        hide();
        log->show();
         }
    }
}


void SignUP::on_pushButton_Sign_clicked()
{
    firstname=ui->lineEdit_firstname->text();
    lastname=ui->lineEdit_lastname->text();
    region=ui->lineEdit_region->text();
    email=ui->lineEdit_email->text();
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_password->text();

    _validation();
}


