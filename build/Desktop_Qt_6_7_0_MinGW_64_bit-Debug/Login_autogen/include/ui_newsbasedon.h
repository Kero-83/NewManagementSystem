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
    QPushButton *Rate;
    QPushButton *Category;
    QPushButton *Time;
    QComboBox *CaegoryList;
    QPushButton *showNew;
    QLabel *label;
    QPushButton *pushButton_back;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Newsbasedon)
    {
        if (Newsbasedon->objectName().isEmpty())
            Newsbasedon->setObjectName("Newsbasedon");
        Newsbasedon->resize(800, 600);
        centralwidget = new QWidget(Newsbasedon);
        centralwidget->setObjectName("centralwidget");
        Rate = new QPushButton(centralwidget);
        Rate->setObjectName("Rate");
        Rate->setGeometry(QRect(80, 170, 141, 61));
        Category = new QPushButton(centralwidget);
        Category->setObjectName("Category");
        Category->setGeometry(QRect(330, 170, 151, 61));
        Time = new QPushButton(centralwidget);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(600, 180, 141, 61));
        CaegoryList = new QComboBox(centralwidget);
        CaegoryList->addItem(QString());
        CaegoryList->addItem(QString());
        CaegoryList->setObjectName("CaegoryList");
        CaegoryList->setGeometry(QRect(220, 260, 101, 31));
        showNew = new QPushButton(centralwidget);
        showNew->setObjectName("showNew");
        showNew->setGeometry(QRect(200, 460, 101, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 311, 51));
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(680, 470, 83, 29));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(500, 270, 101, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 250, 131, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 270, 81, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 340, 101, 29));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 310, 161, 41));
        Newsbasedon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Newsbasedon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Newsbasedon->setMenuBar(menubar);
        statusbar = new QStatusBar(Newsbasedon);
        statusbar->setObjectName("statusbar");
        Newsbasedon->setStatusBar(statusbar);

        retranslateUi(Newsbasedon);
        QObject::connect(Category, &QPushButton::clicked, Time, qOverload<>(&QPushButton::hide));
        QObject::connect(Category, &QPushButton::clicked, Rate, qOverload<>(&QPushButton::hide));
        QObject::connect(Rate, &QPushButton::clicked, Category, qOverload<>(&QPushButton::hide));

        QMetaObject::connectSlotsByName(Newsbasedon);
    } // setupUi

    void retranslateUi(QMainWindow *Newsbasedon)
    {
        Newsbasedon->setWindowTitle(QCoreApplication::translate("Newsbasedon", "MainWindow", nullptr));
        Rate->setText(QCoreApplication::translate("Newsbasedon", "Rating", nullptr));
        Category->setText(QCoreApplication::translate("Newsbasedon", "Category", nullptr));
        Time->setText(QCoreApplication::translate("Newsbasedon", "Time", nullptr));
        CaegoryList->setItemText(0, QString());
        CaegoryList->setItemText(1, QString());

        showNew->setText(QCoreApplication::translate("Newsbasedon", "Show New", nullptr));
        label->setText(QCoreApplication::translate("Newsbasedon", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; font-style:italic; color:#000000;\">Show News Based on</span></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Newsbasedon", "back", nullptr));
        label_2->setText(QCoreApplication::translate("Newsbasedon", "Select category :", nullptr));
        label_3->setText(QCoreApplication::translate("Newsbasedon", "select title :", nullptr));
        pushButton->setText(QCoreApplication::translate("Newsbasedon", "show titles", nullptr));
        label_4->setText(QCoreApplication::translate("Newsbasedon", "Select New:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newsbasedon: public Ui_Newsbasedon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSBASEDON_H
