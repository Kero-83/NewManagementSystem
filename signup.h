#ifndef SIGNUP_H
#define SIGNUP_H

#include "stdafx.h"

namespace Ui {
class SignUP;
}

class SignUP : public QDialog
{
    Q_OBJECT
    bool _validEmail(String email);
    void _validation();
    bool _validUsername_email(String username,String email);
    public:
     QString firstname;
     QString lastname;
     QString region;
     QString email;
     QString username;
     QString password;


    explicit SignUP(QWidget *parent = nullptr);
     SignUP(QString f,QString l,QString u,QString p);
    ~SignUP();

public slots:
    void show_window();
    void close_window();
    //void Write_in_file();


private slots:
    void on_pushButton_Sign_clicked();

private:
    Ui::SignUP *ui;
};

#endif // SIGNUP_H
