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
    QPushButton *pushButton_Rate;
    QPushButton *pushButton_Category;
    QPushButton *pushButton_Time;
    QComboBox *CaegoryList;
    QPushButton *pushButton_showNew;
    QLabel *label;
    QPushButton *pushButton_back;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_showTitle;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Newsbasedon)
    {
        if (Newsbasedon->objectName().isEmpty())
            Newsbasedon->setObjectName("Newsbasedon");
        Newsbasedon->resize(800, 600);
        centralwidget = new QWidget(Newsbasedon);
        centralwidget->setObjectName("centralwidget");
        pushButton_Rate = new QPushButton(centralwidget);
        pushButton_Rate->setObjectName("pushButton_Rate");
        pushButton_Rate->setGeometry(QRect(80, 170, 141, 61));
        pushButton_Category = new QPushButton(centralwidget);
        pushButton_Category->setObjectName("pushButton_Category");
        pushButton_Category->setGeometry(QRect(330, 170, 151, 61));
        pushButton_Time = new QPushButton(centralwidget);
        pushButton_Time->setObjectName("pushButton_Time");
        pushButton_Time->setGeometry(QRect(600, 180, 141, 61));
        CaegoryList = new QComboBox(centralwidget);
        CaegoryList->addItem(QString());
        CaegoryList->addItem(QString());
        CaegoryList->setObjectName("CaegoryList");
        CaegoryList->setGeometry(QRect(220, 260, 101, 31));
        pushButton_showNew = new QPushButton(centralwidget);
        pushButton_showNew->setObjectName("pushButton_showNew");
        pushButton_showNew->setGeometry(QRect(470, 440, 101, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 401, 51));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(680, 500, 101, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(500, 270, 101, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 250, 131, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 270, 81, 20));
        pushButton_showTitle = new QPushButton(centralwidget);
        pushButton_showTitle->setObjectName("pushButton_showTitle");
        pushButton_showTitle->setGeometry(QRect(250, 450, 101, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 290, 161, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 350, 141, 31));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(200, 350, 141, 31));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, 350, 141, 31));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEnabled(false);
        lineEdit_2->setGeometry(QRect(500, 350, 141, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 220, 83, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 220, 83, 29));
        Newsbasedon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Newsbasedon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Newsbasedon->setMenuBar(menubar);
        statusbar = new QStatusBar(Newsbasedon);
        statusbar->setObjectName("statusbar");
        Newsbasedon->setStatusBar(statusbar);

        retranslateUi(Newsbasedon);
        QObject::connect(pushButton_Category, &QPushButton::clicked, pushButton_Time, qOverload<>(&QPushButton::hide));
        QObject::connect(pushButton_Category, &QPushButton::clicked, pushButton_Rate, qOverload<>(&QPushButton::hide));
        QObject::connect(pushButton_Rate, &QPushButton::clicked, pushButton_Category, qOverload<>(&QPushButton::hide));

        QMetaObject::connectSlotsByName(Newsbasedon);
    } // setupUi

    void retranslateUi(QMainWindow *Newsbasedon)
    {
        Newsbasedon->setWindowTitle(QCoreApplication::translate("Newsbasedon", "MainWindow", nullptr));
        pushButton_Rate->setText(QCoreApplication::translate("Newsbasedon", "Trending News", nullptr));
        pushButton_Category->setText(QCoreApplication::translate("Newsbasedon", "Category Section", nullptr));
        pushButton_Time->setText(QCoreApplication::translate("Newsbasedon", "Latest News", nullptr));
        CaegoryList->setItemText(0, QString());
        CaegoryList->setItemText(1, QString());

        pushButton_showNew->setText(QCoreApplication::translate("Newsbasedon", "Show New", nullptr));
        label->setText(QCoreApplication::translate("Newsbasedon", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; font-style:italic; color:#000000;\">Show News Based on</span></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Newsbasedon", "back", nullptr));
        label_2->setText(QCoreApplication::translate("Newsbasedon", "Select category :", nullptr));
        label_3->setText(QCoreApplication::translate("Newsbasedon", "select title :", nullptr));
        pushButton_showTitle->setText(QCoreApplication::translate("Newsbasedon", "show titles", nullptr));
        label_4->setText(QCoreApplication::translate("Newsbasedon", "Select New:", nullptr));
        label_5->setText(QCoreApplication::translate("Newsbasedon", "Selected Category:", nullptr));
        label_6->setText(QCoreApplication::translate("Newsbasedon", "Selected Title:", nullptr));
        pushButton->setText(QCoreApplication::translate("Newsbasedon", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Newsbasedon", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newsbasedon: public Ui_Newsbasedon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSBASEDON_H
