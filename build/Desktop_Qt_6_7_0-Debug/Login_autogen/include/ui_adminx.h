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
    QPushButton *pushButton_addNew;
    QPushButton *pushButton_updateNew;
    QPushButton *pushButton_removeNew;
    QPushButton *pushButton_newCategory;
    QPushButton *pushButton_currentCategory;
    QComboBox *comboBox_selectCurrentCategory;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_OkNewCategory;
    QPushButton *pushButton_OkCurrentCategory;
    QPushButton *pushButton_Ok;
    QLabel *label_4;
    QPushButton *pushButton_DisplayAvgRate;

    void setupUi(QDialog *Adminx)
    {
        if (Adminx->objectName().isEmpty())
            Adminx->setObjectName("Adminx");
        Adminx->resize(857, 654);
        label = new QLabel(Adminx);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 40, 401, 91));
        pushButton_addNew = new QPushButton(Adminx);
        pushButton_addNew->setObjectName("pushButton_addNew");
        pushButton_addNew->setGeometry(QRect(70, 180, 101, 41));
        pushButton_updateNew = new QPushButton(Adminx);
        pushButton_updateNew->setObjectName("pushButton_updateNew");
        pushButton_updateNew->setGeometry(QRect(270, 180, 101, 41));
        pushButton_removeNew = new QPushButton(Adminx);
        pushButton_removeNew->setObjectName("pushButton_removeNew");
        pushButton_removeNew->setGeometry(QRect(460, 180, 101, 41));
        pushButton_newCategory = new QPushButton(Adminx);
        pushButton_newCategory->setObjectName("pushButton_newCategory");
        pushButton_newCategory->setGeometry(QRect(160, 290, 121, 41));
        pushButton_currentCategory = new QPushButton(Adminx);
        pushButton_currentCategory->setObjectName("pushButton_currentCategory");
        pushButton_currentCategory->setGeometry(QRect(470, 290, 131, 41));
        comboBox_selectCurrentCategory = new QComboBox(Adminx);
        comboBox_selectCurrentCategory->setObjectName("comboBox_selectCurrentCategory");
        comboBox_selectCurrentCategory->setGeometry(QRect(500, 380, 82, 28));
        label_2 = new QLabel(Adminx);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(400, 450, 91, 41));
        lineEdit = new QLineEdit(Adminx);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(490, 460, 113, 28));
        label_3 = new QLabel(Adminx);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 390, 171, 41));
        lineEdit_2 = new QLineEdit(Adminx);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(240, 400, 141, 28));
        pushButton_2 = new QPushButton(Adminx);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(730, 550, 83, 29));
        pushButton_OkNewCategory = new QPushButton(Adminx);
        pushButton_OkNewCategory->setObjectName("pushButton_OkNewCategory");
        pushButton_OkNewCategory->setGeometry(QRect(170, 540, 83, 29));
        pushButton_OkCurrentCategory = new QPushButton(Adminx);
        pushButton_OkCurrentCategory->setObjectName("pushButton_OkCurrentCategory");
        pushButton_OkCurrentCategory->setGeometry(QRect(490, 540, 83, 29));
        pushButton_Ok = new QPushButton(Adminx);
        pushButton_Ok->setObjectName("pushButton_Ok");
        pushButton_Ok->setGeometry(QRect(620, 380, 83, 29));
        label_4 = new QLabel(Adminx);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(310, 370, 191, 41));
        pushButton_DisplayAvgRate = new QPushButton(Adminx);
        pushButton_DisplayAvgRate->setObjectName("pushButton_DisplayAvgRate");
        pushButton_DisplayAvgRate->setGeometry(QRect(640, 180, 171, 41));
        pushButton_DisplayAvgRate->raise();
        label->raise();
        pushButton_addNew->raise();
        pushButton_updateNew->raise();
        pushButton_removeNew->raise();
        pushButton_newCategory->raise();
        pushButton_currentCategory->raise();
        comboBox_selectCurrentCategory->raise();
        label_2->raise();
        lineEdit->raise();
        label_3->raise();
        lineEdit_2->raise();
        pushButton_2->raise();
        pushButton_OkNewCategory->raise();
        pushButton_OkCurrentCategory->raise();
        pushButton_Ok->raise();
        label_4->raise();

        retranslateUi(Adminx);

        QMetaObject::connectSlotsByName(Adminx);
    } // setupUi

    void retranslateUi(QDialog *Adminx)
    {
        Adminx->setWindowTitle(QCoreApplication::translate("Adminx", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Adminx", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:700; font-style:italic; color:#ff0000;\">Welcome Admin</span></p></body></html>", nullptr));
        pushButton_addNew->setText(QCoreApplication::translate("Adminx", "Add New", nullptr));
        pushButton_updateNew->setText(QCoreApplication::translate("Adminx", "Update New", nullptr));
        pushButton_removeNew->setText(QCoreApplication::translate("Adminx", "Remove New", nullptr));
        pushButton_newCategory->setText(QCoreApplication::translate("Adminx", "New Category", nullptr));
        pushButton_currentCategory->setText(QCoreApplication::translate("Adminx", "Current Category", nullptr));
        label_2->setText(QCoreApplication::translate("Adminx", "Category :", nullptr));
        label_3->setText(QCoreApplication::translate("Adminx", "Write Category Name :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Adminx", "Exit", nullptr));
        pushButton_OkNewCategory->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        pushButton_OkCurrentCategory->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("Adminx", "Ok", nullptr));
        label_4->setText(QCoreApplication::translate("Adminx", "Select New", nullptr));
        pushButton_DisplayAvgRate->setText(QCoreApplication::translate("Adminx", "Average Rate for News", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminx: public Ui_Adminx {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINX_H
