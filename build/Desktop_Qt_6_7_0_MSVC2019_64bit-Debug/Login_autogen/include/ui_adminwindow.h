/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Adminwindow
{
public:
    QWidget *centralwidget;
    QPushButton *Add_remove_category;
    QPushButton *Add_Remove_new;
    QPushButton *Add_Categ;
    QPushButton *Remove_Categ;
    QPushButton *Remove_New;
    QPushButton *Add_New;
    QLineEdit *Category_text;
    QLineEdit *New_text;
    QPushButton *Add_c_ok;
    QPushButton *remove_c_ok;
    QPushButton *Add_new_ok;
    QPushButton *remove_new_ok;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Adminwindow)
    {
        if (Adminwindow->objectName().isEmpty())
            Adminwindow->setObjectName("Adminwindow");
        Adminwindow->resize(800, 600);
        centralwidget = new QWidget(Adminwindow);
        centralwidget->setObjectName("centralwidget");
        Add_remove_category = new QPushButton(centralwidget);
        Add_remove_category->setObjectName("Add_remove_category");
        Add_remove_category->setGeometry(QRect(30, 90, 161, 41));
        Add_Remove_new = new QPushButton(centralwidget);
        Add_Remove_new->setObjectName("Add_Remove_new");
        Add_Remove_new->setGeometry(QRect(280, 90, 161, 41));
        Add_Categ = new QPushButton(centralwidget);
        Add_Categ->setObjectName("Add_Categ");
        Add_Categ->setGeometry(QRect(20, 160, 80, 31));
        Remove_Categ = new QPushButton(centralwidget);
        Remove_Categ->setObjectName("Remove_Categ");
        Remove_Categ->setGeometry(QRect(130, 160, 80, 31));
        Remove_New = new QPushButton(centralwidget);
        Remove_New->setObjectName("Remove_New");
        Remove_New->setGeometry(QRect(360, 160, 80, 31));
        Add_New = new QPushButton(centralwidget);
        Add_New->setObjectName("Add_New");
        Add_New->setGeometry(QRect(270, 160, 80, 31));
        Category_text = new QLineEdit(centralwidget);
        Category_text->setObjectName("Category_text");
        Category_text->setGeometry(QRect(60, 240, 113, 41));
        New_text = new QLineEdit(centralwidget);
        New_text->setObjectName("New_text");
        New_text->setGeometry(QRect(300, 240, 113, 41));
        Add_c_ok = new QPushButton(centralwidget);
        Add_c_ok->setObjectName("Add_c_ok");
        Add_c_ok->setGeometry(QRect(40, 320, 80, 24));
        remove_c_ok = new QPushButton(centralwidget);
        remove_c_ok->setObjectName("remove_c_ok");
        remove_c_ok->setGeometry(QRect(130, 320, 80, 24));
        Add_new_ok = new QPushButton(centralwidget);
        Add_new_ok->setObjectName("Add_new_ok");
        Add_new_ok->setGeometry(QRect(280, 320, 80, 24));
        remove_new_ok = new QPushButton(centralwidget);
        remove_new_ok->setObjectName("remove_new_ok");
        remove_new_ok->setGeometry(QRect(380, 320, 80, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(470, 423, 80, 41));
        Adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Adminwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Adminwindow);
        statusbar->setObjectName("statusbar");
        Adminwindow->setStatusBar(statusbar);

        retranslateUi(Adminwindow);

        QMetaObject::connectSlotsByName(Adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Adminwindow)
    {
        Adminwindow->setWindowTitle(QCoreApplication::translate("Adminwindow", "MainWindow", nullptr));
        Add_remove_category->setText(QCoreApplication::translate("Adminwindow", "Add Or Remove Category", nullptr));
        Add_Remove_new->setText(QCoreApplication::translate("Adminwindow", "Add Or Remove New", nullptr));
        Add_Categ->setText(QCoreApplication::translate("Adminwindow", "Add", nullptr));
        Remove_Categ->setText(QCoreApplication::translate("Adminwindow", "Remove", nullptr));
        Remove_New->setText(QCoreApplication::translate("Adminwindow", "Remove", nullptr));
        Add_New->setText(QCoreApplication::translate("Adminwindow", "Add", nullptr));
        Add_c_ok->setText(QCoreApplication::translate("Adminwindow", "Ok", nullptr));
        remove_c_ok->setText(QCoreApplication::translate("Adminwindow", "OK", nullptr));
        Add_new_ok->setText(QCoreApplication::translate("Adminwindow", "ok", nullptr));
        remove_new_ok->setText(QCoreApplication::translate("Adminwindow", "ok", nullptr));
        pushButton->setText(QCoreApplication::translate("Adminwindow", "user", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminwindow: public Ui_Adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
