/********************************************************************************
** Form generated from reading UI file 'news.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWS_H
#define UI_NEWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_News
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *News)
    {
        if (News->objectName().isEmpty())
            News->setObjectName("News");
        News->resize(800, 600);
        centralwidget = new QWidget(News);
        centralwidget->setObjectName("centralwidget");
        News->setCentralWidget(centralwidget);
        menubar = new QMenuBar(News);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        News->setMenuBar(menubar);
        statusbar = new QStatusBar(News);
        statusbar->setObjectName("statusbar");
        News->setStatusBar(statusbar);

        retranslateUi(News);

        QMetaObject::connectSlotsByName(News);
    } // setupUi

    void retranslateUi(QMainWindow *News)
    {
        News->setWindowTitle(QCoreApplication::translate("News", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class News: public Ui_News {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWS_H
