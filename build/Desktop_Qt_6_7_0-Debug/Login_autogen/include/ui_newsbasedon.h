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
    QPushButton *OK;
    QLabel *label;
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
        Rate->setGeometry(QRect(70, 180, 141, 61));
        Category = new QPushButton(centralwidget);
        Category->setObjectName("Category");
        Category->setGeometry(QRect(310, 180, 151, 61));
        Time = new QPushButton(centralwidget);
        Time->setObjectName("Time");
        Time->setGeometry(QRect(600, 180, 141, 61));
        CaegoryList = new QComboBox(centralwidget);
        CaegoryList->addItem(QString());
        CaegoryList->addItem(QString());
        CaegoryList->setObjectName("CaegoryList");
        CaegoryList->setGeometry(QRect(470, 190, 101, 31));
        OK = new QPushButton(centralwidget);
        OK->setObjectName("OK");
        OK->setGeometry(QRect(440, 280, 61, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 30, 311, 51));
        Newsbasedon->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Newsbasedon);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Newsbasedon->setMenuBar(menubar);
        statusbar = new QStatusBar(Newsbasedon);
        statusbar->setObjectName("statusbar");
        Newsbasedon->setStatusBar(statusbar);

        retranslateUi(Newsbasedon);
        QObject::connect(Category, &QPushButton::clicked, Time, qOverload<>(&QPushButton::hide));
        QObject::connect(Category, &QPushButton::clicked, Rate, qOverload<>(&QPushButton::hide));

        QMetaObject::connectSlotsByName(Newsbasedon);
    } // setupUi

    void retranslateUi(QMainWindow *Newsbasedon)
    {
        Newsbasedon->setWindowTitle(QCoreApplication::translate("Newsbasedon", "MainWindow", nullptr));
        Rate->setText(QCoreApplication::translate("Newsbasedon", "Rating", nullptr));
        Category->setText(QCoreApplication::translate("Newsbasedon", "Category", nullptr));
        Time->setText(QCoreApplication::translate("Newsbasedon", "Time", nullptr));
        CaegoryList->setItemText(0, QCoreApplication::translate("Newsbasedon", "Sport", nullptr));
        CaegoryList->setItemText(1, QCoreApplication::translate("Newsbasedon", "Health", nullptr));

        OK->setText(QCoreApplication::translate("Newsbasedon", "Ok", nullptr));
        label->setText(QCoreApplication::translate("Newsbasedon", "<html><head/><body><p><span style=\" font-size:22pt; font-weight:700; font-style:italic; color:#000000;\">Show News Based on</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newsbasedon: public Ui_Newsbasedon {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWSBASEDON_H
