/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QPushButton *pushButton_back;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(857, 654);
        pushButton_back = new QPushButton(HomePage);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(700, 550, 91, 41));
        QFont font;
        font.setPointSize(12);
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        label = new QLabel(HomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 301, 81));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setKerning(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: orange"));
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 250, 101, 41));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);"));
        label_2 = new QLabel(HomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 60, 171, 61));
        label_3 = new QLabel(HomePage);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(660, 60, 171, 71));
        pushButton_2 = new QPushButton(HomePage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(590, 250, 101, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);"));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        pushButton_back->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "<font color=blue>home page", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; font-style:italic; color:#ffff00;\">Welcome</span></p></body></html>", nullptr));
        label_3->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("HomePage", "Display News", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
