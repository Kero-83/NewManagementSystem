/********************************************************************************
** Form generated from reading UI file 'myprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROFILE_H
#define UI_MYPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyProfile
{
public:
    QLabel *label;
    QLabel *label_10;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_8;
    QPushButton *pushButton;
    QLabel *label_11;

    void setupUi(QDialog *MyProfile)
    {
        if (MyProfile->objectName().isEmpty())
            MyProfile->setObjectName("MyProfile");
        MyProfile->resize(817, 614);
        label = new QLabel(MyProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(-50, -330, 1211, 1281));
        label->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/world-map-background-3d-rendering_327072-1957.png);"));
        label_10 = new QLabel(MyProfile);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(80, 220, 201, 51));
        label_7 = new QLabel(MyProfile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(230, 420, 211, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"background color:rgb(255, 255, 255)"));
        label_12 = new QLabel(MyProfile);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(80, 290, 171, 51));
        label_9 = new QLabel(MyProfile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(270, 170, 181, 51));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"background color:rgb(255, 255, 255)"));
        label_5 = new QLabel(MyProfile);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 360, 201, 51));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"background color:rgb(255, 255, 255)"));
        label_6 = new QLabel(MyProfile);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(80, 420, 121, 51));
        label_2 = new QLabel(MyProfile);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(140, 30, 291, 71));
        label_4 = new QLabel(MyProfile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 360, 161, 51));
        label_3 = new QLabel(MyProfile);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 290, 181, 51));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"background color:rgb(255, 255, 255)"));
        label_8 = new QLabel(MyProfile);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(70, 160, 181, 51));
        pushButton = new QPushButton(MyProfile);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(730, 570, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        label_11 = new QLabel(MyProfile);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(280, 220, 181, 51));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe UI\";\n"
"background color:rgb(255, 255, 255)"));

        retranslateUi(MyProfile);

        QMetaObject::connectSlotsByName(MyProfile);
    } // setupUi

    void retranslateUi(QDialog *MyProfile)
    {
        MyProfile->setWindowTitle(QCoreApplication::translate("MyProfile", "Dialog", nullptr));
        label->setText(QString());
        label_10->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Last Name :</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MyProfile", "<font color=white>", nullptr));
        label_12->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Username :</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MyProfile", "<font color=white>", nullptr));
        label_6->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Email :</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#ffffff;\">My Profile</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">Password :</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MyProfile", "<font color=white>", nullptr));
        label_8->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">First Name :</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MyProfile", "Back", nullptr));
        label_11->setText(QCoreApplication::translate("MyProfile", "<font color =white>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyProfile: public Ui_MyProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFILE_H
