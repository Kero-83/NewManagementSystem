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
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *MyProfile)
    {
        if (MyProfile->objectName().isEmpty())
            MyProfile->setObjectName("MyProfile");
        MyProfile->resize(857, 654);
        label = new QLabel(MyProfile);
        label->setObjectName("label");
        label->setGeometry(QRect(280, 20, 291, 71));
        label_2 = new QLabel(MyProfile);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 280, 121, 51));
        label_3 = new QLabel(MyProfile);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(230, 280, 181, 51));
        QFont font;
        font.setPointSize(12);
        font.setItalic(true);
        label_3->setFont(font);
        label_4 = new QLabel(MyProfile);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 370, 121, 51));
        label_5 = new QLabel(MyProfile);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 370, 131, 51));
        label_5->setFont(font);
        label_6 = new QLabel(MyProfile);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 450, 121, 51));
        label_7 = new QLabel(MyProfile);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(210, 450, 211, 51));
        label_7->setFont(font);
        pushButton = new QPushButton(MyProfile);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(690, 530, 81, 31));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        label_8 = new QLabel(MyProfile);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(90, 140, 121, 51));
        label_9 = new QLabel(MyProfile);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(220, 140, 181, 51));
        label_9->setFont(font);
        label_10 = new QLabel(MyProfile);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(90, 210, 121, 51));
        label_11 = new QLabel(MyProfile);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(220, 210, 181, 51));
        label_11->setFont(font);

        retranslateUi(MyProfile);

        QMetaObject::connectSlotsByName(MyProfile);
    } // setupUi

    void retranslateUi(QDialog *MyProfile)
    {
        MyProfile->setWindowTitle(QCoreApplication::translate("MyProfile", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:700; font-style:italic; color:#ff0000;\">My Profile</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">UserName :</span></p></body></html>", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Password :</span></p></body></html>", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Email :</span></p></body></html>", nullptr));
        label_7->setText(QString());
        pushButton->setText(QCoreApplication::translate("MyProfile", "Back", nullptr));
        label_8->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">First Name :</span></p></body></html>", nullptr));
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("MyProfile", "<html><head/><body><p><span style=\" font-size:12pt; color:#0000ff;\">Last Name :</span></p></body></html>", nullptr));
        label_11->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyProfile: public Ui_MyProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFILE_H
