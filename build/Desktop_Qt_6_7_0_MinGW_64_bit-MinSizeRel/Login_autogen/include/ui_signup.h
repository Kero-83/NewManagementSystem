/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SignUP
{
public:
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_firstname;
    QLineEdit *lineEdit_lastname;
    QLineEdit *lineEdit_username;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_region;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_Sign;
    QLabel *label_9;
    QLineEdit *lineEdit_repassword;

    void setupUi(QDialog *SignUP)
    {
        if (SignUP->objectName().isEmpty())
            SignUP->setObjectName("SignUP");
        SignUP->resize(857, 654);
        QFont font;
        font.setPointSize(12);
        SignUP->setFont(font);
        label_4 = new QLabel(SignUP);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 170, 181, 41));
        label_5 = new QLabel(SignUP);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(80, 70, 211, 41));
        label_6 = new QLabel(SignUP);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 120, 191, 41));
        label_7 = new QLabel(SignUP);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 340, 181, 41));
        lineEdit_firstname = new QLineEdit(SignUP);
        lineEdit_firstname->setObjectName("lineEdit_firstname");
        lineEdit_firstname->setGeometry(QRect(230, 80, 201, 28));
        lineEdit_lastname = new QLineEdit(SignUP);
        lineEdit_lastname->setObjectName("lineEdit_lastname");
        lineEdit_lastname->setGeometry(QRect(230, 130, 201, 28));
        lineEdit_username = new QLineEdit(SignUP);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(230, 180, 201, 28));
        label_8 = new QLabel(SignUP);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 0, 231, 61));
        QFont font1;
        font1.setPointSize(30);
        label_8->setFont(font1);
        label = new QLabel(SignUP);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 230, 161, 31));
        label_2 = new QLabel(SignUP);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 280, 261, 41));
        lineEdit_region = new QLineEdit(SignUP);
        lineEdit_region->setObjectName("lineEdit_region");
        lineEdit_region->setGeometry(QRect(230, 230, 201, 28));
        lineEdit_email = new QLineEdit(SignUP);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(230, 290, 201, 28));
        lineEdit_password = new QLineEdit(SignUP);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(230, 350, 201, 28));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_Sign = new QPushButton(SignUP);
        pushButton_Sign->setObjectName("pushButton_Sign");
        pushButton_Sign->setGeometry(QRect(120, 500, 101, 31));
        pushButton_Sign->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);"));
        label_9 = new QLabel(SignUP);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(80, 400, 181, 41));
        lineEdit_repassword = new QLineEdit(SignUP);
        lineEdit_repassword->setObjectName("lineEdit_repassword");
        lineEdit_repassword->setGeometry(QRect(230, 410, 201, 28));
        lineEdit_repassword->setEchoMode(QLineEdit::Password);

        retranslateUi(SignUP);

        QMetaObject::connectSlotsByName(SignUP);
    } // setupUi

    void retranslateUi(QDialog *SignUP)
    {
        SignUP->setWindowTitle(QCoreApplication::translate("SignUP", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">Username :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">First name :</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">Last name :</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">Password :</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("SignUP", "<font color=red>Sign up", nullptr));
        label->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">Region :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-size:12pt; font-style:italic; color:#0000ff;\">Email :</span></p></body></html>", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("SignUP", "Sign", nullptr));
        label_9->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-style:italic; color:#0000ff;\">Repassword :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUP: public Ui_SignUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
