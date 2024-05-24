/********************************************************************************
** Form generated from reading UI file 'newsbasedon.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWSBASEDON_H
#define UI_NEWSBASEDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Newsbasedon
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QPushButton *pushButton_Category;
    QPushButton *pushButton_showNew;
    QPushButton *pushButton_descendingRate;
    QLabel *label_5;
    QComboBox *comboBox;
    QPushButton *pushButton_back;
    QPushButton *pushButton_Rate;
    QLineEdit *lineEdit;
    QPushButton *pushButton_showTitle;
    QComboBox *CaegoryList;
    QPushButton *pushButton;
    QPushButton *pushButton_Time;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Newsbasedon)
    {
        if (Newsbasedon->objectName().isEmpty())
            Newsbasedon->setObjectName("Newsbasedon");
        Newsbasedon->resize(800, 600);
        centralwidget = new QWidget(Newsbasedon);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-50, -70, 871, 681));
        label->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/realistic-news-studio-background_23-2149985600.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 20, 401, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 280, 161, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(390, 260, 91, 31));
        pushButton_Category = new QPushButton(centralwidget);
        pushButton_Category->setObjectName("pushButton_Category");
        pushButton_Category->setGeometry(QRect(220, 130, 151, 61));
        pushButton_showNew = new QPushButton(centralwidget);
        pushButton_showNew->setObjectName("pushButton_showNew");
        pushButton_showNew->setGeometry(QRect(460, 430, 101, 31));
        pushButton_descendingRate = new QPushButton(centralwidget);
        pushButton_descendingRate->setObjectName("pushButton_descendingRate");
        pushButton_descendingRate->setGeometry(QRect(410, 130, 151, 61));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 340, 141, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(490, 260, 101, 28));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(670, 490, 101, 31));
        pushButton_Rate = new QPushButton(centralwidget);
        pushButton_Rate->setObjectName("pushButton_Rate");
        pushButton_Rate->setGeometry(QRect(20, 130, 141, 61));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(190, 340, 141, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        pushButton_showTitle = new QPushButton(centralwidget);
        pushButton_showTitle->setObjectName("pushButton_showTitle");
        pushButton_showTitle->setGeometry(QRect(240, 430, 101, 31));
        CaegoryList = new QComboBox(centralwidget);
        CaegoryList->addItem(QString());
        CaegoryList->addItem(QString());
        CaegoryList->setObjectName("CaegoryList");
        CaegoryList->setGeometry(QRect(210, 250, 101, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 210, 83, 29));
        pushButton_Time = new QPushButton(centralwidget);
        pushButton_Time->setObjectName("pushButton_Time");
        pushButton_Time->setGeometry(QRect(610, 130, 141, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(500, 210, 83, 29));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 240, 131, 41));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(480, 340, 141, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"border-color: blue;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(370, 340, 141, 31));
        Newsbasedon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Newsbasedon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Newsbasedon->setMenuBar(menubar);
        statusbar = new QStatusBar(Newsbasedon);
        statusbar->setObjectName("statusbar");
        Newsbasedon->setStatusBar(statusbar);

        retranslateUi(Newsbasedon);

        QMetaObject::connectSlotsByName(Newsbasedon);
    } // setupUi

    void retranslateUi(QMainWindow *Newsbasedon)
    {
        Newsbasedon->setWindowTitle(QCoreApplication::translate("Newsbasedon", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Newsbasedon", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; font-style:italic; color:#ffffff;\">Show News Based on</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Newsbasedon", "<font color =white>Select New:", nullptr));
        label_3->setText(QCoreApplication::translate("Newsbasedon", "<font color =white>select title  :", nullptr));
        pushButton_Category->setText(QCoreApplication::translate("Newsbasedon", "Category Section", nullptr));
        pushButton_showNew->setText(QCoreApplication::translate("Newsbasedon", "Show New", nullptr));
        pushButton_descendingRate->setText(QCoreApplication::translate("Newsbasedon", "Rating Section", nullptr));
        label_5->setText(QCoreApplication::translate("Newsbasedon", "<font color =white>Selected Category :", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Newsbasedon", "back", nullptr));
        pushButton_Rate->setText(QCoreApplication::translate("Newsbasedon", "Trending News", nullptr));
        pushButton_showTitle->setText(QCoreApplication::translate("Newsbasedon", "show titles", nullptr));
        CaegoryList->setItemText(0, QString());
        CaegoryList->setItemText(1, QString());

        pushButton->setText(QCoreApplication::translate("Newsbasedon", "Ok", nullptr));
        pushButton_Time->setText(QCoreApplication::translate("Newsbasedon", "Latest News", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Newsbasedon", "Ok", nullptr));
        label_6->setText(QCoreApplication::translate("Newsbasedon", "<font color =white>Select category :", nullptr));
        label_7->setText(QCoreApplication::translate("Newsbasedon", "<font color =white>Selected Title :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newsbasedon: public Ui_Newsbasedon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSBASEDON_H
