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
    QLabel *label_3;
    QLineEdit *lineEdit_lastname;
    QLabel *label_7;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_region;
    QLabel *label_9;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_email;
    QLabel *label_4;
    QLineEdit *lineEdit_repassword;
    QPushButton *pushButton_Sign;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit_firstname;
    QLabel *label;

    void setupUi(QDialog *SignUP)
    {
        if (SignUP->objectName().isEmpty())
            SignUP->setObjectName("SignUP");
        SignUP->resize(857, 654);
        QFont font;
        font.setPointSize(12);
        SignUP->setFont(font);
        label_3 = new QLabel(SignUP);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-170, -430, 1491, 1351));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/world-map-background-3d-rendering_327072-1957.png);"));
        lineEdit_lastname = new QLineEdit(SignUP);
        lineEdit_lastname->setObjectName("lineEdit_lastname");
        lineEdit_lastname->setGeometry(QRect(300, 140, 201, 28));
        lineEdit_lastname->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        label_7 = new QLabel(SignUP);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(160, 350, 181, 41));
        lineEdit_password = new QLineEdit(SignUP);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(300, 360, 201, 28));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_region = new QLineEdit(SignUP);
        lineEdit_region->setObjectName("lineEdit_region");
        lineEdit_region->setGeometry(QRect(300, 240, 201, 28));
        lineEdit_region->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        label_9 = new QLabel(SignUP);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(150, 410, 181, 41));
        lineEdit_username = new QLineEdit(SignUP);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(300, 190, 201, 28));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        lineEdit_email = new QLineEdit(SignUP);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(300, 300, 201, 28));
        lineEdit_email->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        label_4 = new QLabel(SignUP);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(150, 180, 181, 41));
        lineEdit_repassword = new QLineEdit(SignUP);
        lineEdit_repassword->setObjectName("lineEdit_repassword");
        lineEdit_repassword->setGeometry(QRect(300, 420, 201, 28));
        lineEdit_repassword->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        lineEdit_repassword->setEchoMode(QLineEdit::Password);
        pushButton_Sign = new QPushButton(SignUP);
        pushButton_Sign->setObjectName("pushButton_Sign");
        pushButton_Sign->setGeometry(QRect(350, 500, 101, 31));
        pushButton_Sign->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        label_6 = new QLabel(SignUP);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(150, 130, 191, 41));
        label_2 = new QLabel(SignUP);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 290, 261, 41));
        label_5 = new QLabel(SignUP);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 80, 211, 41));
        lineEdit_firstname = new QLineEdit(SignUP);
        lineEdit_firstname->setObjectName("lineEdit_firstname");
        lineEdit_firstname->setGeometry(QRect(300, 90, 201, 28));
        lineEdit_firstname->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        label = new QLabel(SignUP);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 240, 161, 31));

        retranslateUi(SignUP);

        QMetaObject::connectSlotsByName(SignUP);
    } // setupUi

    void retranslateUi(QDialog *SignUP)
    {
        SignUP->setWindowTitle(QCoreApplication::translate("SignUP", "Dialog", nullptr));
        label_3->setText(QString());
        label_7->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Repassword :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Username :</span></p></body></html>", nullptr));
        pushButton_Sign->setText(QCoreApplication::translate("SignUP", "Sign", nullptr));
        label_6->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Last name :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Email :</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">First name :</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("SignUP", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Region :</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUP: public Ui_SignUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
