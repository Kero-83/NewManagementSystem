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
    QPushButton *pushButton_Login;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_Exit;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_CreateAccount;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(857, 654);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(250, 380, 101, 31));
        pushButton_Login->setStyleSheet(QString::fromUtf8("font: 12pt \"Segoe UI\";\n"
"background-color: rgb(0, 0, 127);"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 40, 211, 71));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 130, 111, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 200, 111, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setItalic(true);
        label_3->setFont(font2);
        pushButton_Exit = new QPushButton(centralwidget);
        pushButton_Exit->setObjectName("pushButton_Exit");
        pushButton_Exit->setGeometry(QRect(450, 380, 101, 29));
        pushButton_Exit->setFont(font1);
        pushButton_Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(300, 130, 171, 28));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(300, 200, 171, 28));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        pushButton_CreateAccount = new QPushButton(centralwidget);
        pushButton_CreateAccount->setObjectName("pushButton_CreateAccount");
        pushButton_CreateAccount->setGeometry(QRect(320, 280, 141, 41));
        pushButton_CreateAccount->setFont(font1);
        pushButton_CreateAccount->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 85, 0);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(130, 290, 171, 20));
        QFont font3;
        font3.setPointSize(10);
        label_4->setFont(font3);
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 857, 25));
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
        pushButton_Login->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#ff0000;\">Sign in</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-style:italic; color:#0000ff;\">Username :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "<font color=blue>Password :", nullptr));
        pushButton_Exit->setText(QCoreApplication::translate("Login", "Exit", nullptr));
        lineEdit_password->setText(QString());
        pushButton_CreateAccount->setText(QCoreApplication::translate("Login", "create account", nullptr));
        label_4->setText(QCoreApplication::translate("Login", "<html><head/><body><p><span style=\" font-style:italic; text-decoration: underline; color:#ffa500;\">Don't have account?</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
