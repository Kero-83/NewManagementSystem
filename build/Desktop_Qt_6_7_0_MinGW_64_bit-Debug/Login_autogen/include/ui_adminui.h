/********************************************************************************
** Form generated from reading UI file 'adminui.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINUI_H
#define UI_ADMINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AdminUI
{
public:
    QLabel *label;
    QPushButton *pushButton__addNew;
    QPushButton *pushButton_Back;
    QPushButton *pushButton__updataNews;
    QPushButton *pushButton__removeNews;
    QPushButton *pushButton__addNewtoNewCategory;
    QPushButton *pushButton__addNewtoCurrentCategory;
    QComboBox *comboBox_selectCurrentCategory;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *AdminUI)
    {
        if (AdminUI->objectName().isEmpty())
            AdminUI->setObjectName("AdminUI");
        AdminUI->setEnabled(true);
        AdminUI->resize(857, 654);
        label = new QLabel(AdminUI);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 40, 401, 91));
        pushButton__addNew = new QPushButton(AdminUI);
        pushButton__addNew->setObjectName("pushButton__addNew");
        pushButton__addNew->setGeometry(QRect(120, 180, 101, 41));
        pushButton_Back = new QPushButton(AdminUI);
        pushButton_Back->setObjectName("pushButton_Back");
        pushButton_Back->setGeometry(QRect(690, 510, 83, 29));
        pushButton__updataNews = new QPushButton(AdminUI);
        pushButton__updataNews->setObjectName("pushButton__updataNews");
        pushButton__updataNews->setGeometry(QRect(360, 180, 101, 41));
        pushButton__removeNews = new QPushButton(AdminUI);
        pushButton__removeNews->setObjectName("pushButton__removeNews");
        pushButton__removeNews->setGeometry(QRect(610, 180, 101, 41));
        pushButton__addNewtoNewCategory = new QPushButton(AdminUI);
        pushButton__addNewtoNewCategory->setObjectName("pushButton__addNewtoNewCategory");
        pushButton__addNewtoNewCategory->setGeometry(QRect(160, 250, 111, 41));
        pushButton__addNewtoCurrentCategory = new QPushButton(AdminUI);
        pushButton__addNewtoCurrentCategory->setObjectName("pushButton__addNewtoCurrentCategory");
        pushButton__addNewtoCurrentCategory->setGeometry(QRect(470, 250, 131, 41));
        comboBox_selectCurrentCategory = new QComboBox(AdminUI);
        comboBox_selectCurrentCategory->setObjectName("comboBox_selectCurrentCategory");
        comboBox_selectCurrentCategory->setGeometry(QRect(400, 340, 82, 28));
        label_2 = new QLabel(AdminUI);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(320, 420, 101, 41));
        lineEdit = new QLineEdit(AdminUI);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(410, 430, 131, 28));
        pushButton = new QPushButton(AdminUI);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(550, 340, 83, 29));

        retranslateUi(AdminUI);

        QMetaObject::connectSlotsByName(AdminUI);
    } // setupUi

    void retranslateUi(QDialog *AdminUI)
    {
        AdminUI->setWindowTitle(QCoreApplication::translate("AdminUI", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminUI", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:700; font-style:italic; color:#ff0000;\">Welcome Admin</span></p></body></html>", nullptr));
        pushButton__addNew->setText(QCoreApplication::translate("AdminUI", "Add New", nullptr));
        pushButton_Back->setText(QCoreApplication::translate("AdminUI", "Back", nullptr));
        pushButton__updataNews->setText(QCoreApplication::translate("AdminUI", "Update News", nullptr));
        pushButton__removeNews->setText(QCoreApplication::translate("AdminUI", "Remove News", nullptr));
        pushButton__addNewtoNewCategory->setText(QCoreApplication::translate("AdminUI", "New Category", nullptr));
        pushButton__addNewtoCurrentCategory->setText(QCoreApplication::translate("AdminUI", "Current Category", nullptr));
        label_2->setText(QCoreApplication::translate("AdminUI", "Category :", nullptr));
        pushButton->setText(QCoreApplication::translate("AdminUI", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminUI: public Ui_AdminUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINUI_H
