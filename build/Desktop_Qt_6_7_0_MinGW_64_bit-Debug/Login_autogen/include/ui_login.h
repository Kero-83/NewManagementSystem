/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *pushButton_CreateAccount;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Exit;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(817, 614);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-200, -100, 1071, 791));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/world-map-background-3d-rendering_327072-1957.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 240, 111, 31));
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 410, 181, 31));
        QFont font1;
        font1.setPointSize(10);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 127);"));
        pushButton_CreateAccount = new QPushButton(centralwidget);
        pushButton_CreateAccount->setObjectName("pushButton_CreateAccount");
        pushButton_CreateAccount->setGeometry(QRect(310, 450, 141, 41));
        pushButton_CreateAccount->setFont(font);
        pushButton_CreateAccount->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(330, 360, 101, 31));
        pushButton_Login->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(710, 530, 101, 29));
        pushButton_Exit->setFont(font);
        pushButton_Exit->setStyleSheet(QString::fromUtf8("backgroud color: rgb(0, 255, 0)"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 300, 111, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        label_3->setFont(font2);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(300, 240, 171, 28));
        lineEdit_username->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(300, 300, 171, 28));
        lineEdit_password->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;\n"
""));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 70, 161, 161));
        label->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/Picsart_24-05-16_01-04-15-280.png);"));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 817, 25));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_5->setText(QString());
        label_2->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; color:#ffffff;\">Username :</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-weight:700; font-style:italic; text-decoration: underline; color:#ffffff;\">Don't have account?</span></p></body></html>", nullptr));
        pushButton_CreateAccount->setText(QCoreApplication::translate("Login", "create account", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("Login", "Exit", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-weight:700; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        lineEdit_password->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
