/********************************************************************************
** Form generated from reading UI file 'adminx.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINX_H
#define UI_ADMINX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Adminx
{
public:
    QLabel *label;
    QLabel *label_4;
    QPushButton *pushButton_addNew;
    QLabel *label_3;
    QPushButton *pushButton_OkCurrentCategory;
    QPushButton *pushButton_Ok;
    QPushButton *pushButton_2;
    QComboBox *comboBox_selectCurrentCategory;
    QPushButton *pushButton_OkNewCategory;
    QPushButton *pushButton_removeNew;
    QLineEdit *lineEdit;
    QLabel *label_Admin;
    QLabel *label_2;
    QPushButton *pushButton_currentCategory;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_DisplayAvgRate;
    QPushButton *pushButton_updateNew;
    QPushButton *pushButton_newCategory;

    void setupUi(QDialog *Adminx)
    {
        if (Adminx->objectName().isEmpty())
            Adminx->setObjectName("Adminx");
        Adminx->resize(857, 654);
        label = new QLabel(Adminx);
        label->setObjectName("label");
        label->setGeometry(QRect(-190, -240, 1171, 1131));
        label->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/world-map-background-3d-rendering_327072-1957.png);"));
        label_4 = new QLabel(Adminx);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 370, 191, 41));
        pushButton_addNew = new QPushButton(Adminx);
        pushButton_addNew->setObjectName("pushButton_addNew");
        pushButton_addNew->setGeometry(QRect(60, 180, 101, 41));
        label_3 = new QLabel(Adminx);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 390, 171, 41));
        pushButton_OkCurrentCategory = new QPushButton(Adminx);
        pushButton_OkCurrentCategory->setObjectName("pushButton_OkCurrentCategory");
        pushButton_OkCurrentCategory->setGeometry(QRect(480, 540, 83, 29));
        pushButton_Ok = new QPushButton(Adminx);
        pushButton_Ok->setObjectName("pushButton_Ok");
        pushButton_Ok->setGeometry(QRect(610, 380, 83, 29));
        pushButton_2 = new QPushButton(Adminx);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(760, 610, 83, 29));
        comboBox_selectCurrentCategory = new QComboBox(Adminx);
        comboBox_selectCurrentCategory->setObjectName("comboBox_selectCurrentCategory");
        comboBox_selectCurrentCategory->setGeometry(QRect(490, 380, 82, 28));
        pushButton_OkNewCategory = new QPushButton(Adminx);
        pushButton_OkNewCategory->setObjectName("pushButton_OkNewCategory");
        pushButton_OkNewCategory->setGeometry(QRect(240, 540, 83, 29));
        pushButton_removeNew = new QPushButton(Adminx);
        pushButton_removeNew->setObjectName("pushButton_removeNew");
        pushButton_removeNew->setGeometry(QRect(450, 180, 101, 41));
        lineEdit = new QLineEdit(Adminx);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(480, 460, 113, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"box-shadow: 50px 50px 30px black;\n"
"border-color: blue;\n"
""));
        label_Admin = new QLabel(Adminx);
        label_Admin->setObjectName("label_Admin");
        label_Admin->setGeometry(QRect(210, 40, 401, 91));
        label_2 = new QLabel(Adminx);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 450, 91, 41));
        pushButton_currentCategory = new QPushButton(Adminx);
        pushButton_currentCategory->setObjectName("pushButton_currentCategory");
        pushButton_currentCategory->setGeometry(QRect(460, 290, 131, 41));
        lineEdit_2 = new QLineEdit(Adminx);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(230, 400, 141, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"box-shadow: 50px 50px 30px black;\n"
"border-color: blue;\n"
""));
        pushButton_DisplayAvgRate = new QPushButton(Adminx);
        pushButton_DisplayAvgRate->setObjectName("pushButton_DisplayAvgRate");
        pushButton_DisplayAvgRate->setGeometry(QRect(630, 180, 171, 41));
        pushButton_updateNew = new QPushButton(Adminx);
        pushButton_updateNew->setObjectName("pushButton_updateNew");
        pushButton_updateNew->setGeometry(QRect(260, 180, 101, 41));
        pushButton_newCategory = new QPushButton(Adminx);
        pushButton_newCategory->setObjectName("pushButton_newCategory");
        pushButton_newCategory->setGeometry(QRect(150, 290, 121, 41));

        retranslateUi(Adminx);

        QMetaObject::connectSlotsByName(Adminx);
    } // setupUi

    void retranslateUi(QDialog *Adminx)
    {
        Adminx->setWindowTitle(QCoreApplication::translate("Adminx", "Dialog", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("Adminx", "Select New", nullptr));
        pushButton_addNew->setText(QCoreApplication::translate("Adminx", "Add New", nullptr));
        label_3->setText(QCoreApplication::translate("Adminx", "Write Category Name :", nullptr));
        pushButton_OkCurrentCategory->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Adminx", "Exit", nullptr));
        pushButton_OkNewCategory->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        pushButton_removeNew->setText(QCoreApplication::translate("Adminx", "Remove New", nullptr));
        label_Admin->setText(QCoreApplication::translate("Adminx", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:700; font-style:italic; color:#ff0000;\">Welcome Admin</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Adminx", "Category :", nullptr));
        pushButton_currentCategory->setText(QCoreApplication::translate("Adminx", "Current Category", nullptr));
        pushButton_DisplayAvgRate->setText(QCoreApplication::translate("Adminx", "Average Rate for News", nullptr));
        pushButton_updateNew->setText(QCoreApplication::translate("Adminx", "Update New", nullptr));
        pushButton_newCategory->setText(QCoreApplication::translate("Adminx", "New Category", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminx: public Ui_Adminx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINX_H
