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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QLabel *label_2;
    QLabel *label_Image;
    QComboBox *comboBox_favNews;
    QPushButton *pushButton;
    QPushButton *pushButton_search;
    QPushButton *pushButton_favNews;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_back;
    QPushButton *pushButton_showNew;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(846, 699);
        label_2 = new QLabel(HomePage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-90, -120, 1021, 911));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/realistic-news-studio-background_23-2149985612.png);"));
        label_Image = new QLabel(HomePage);
        label_Image->setObjectName("label_Image");
        label_Image->setGeometry(QRect(270, 60, 961, 851));
        label_Image->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/\330\256\331\204\331\201\331\212\330\251_\331\204\330\265\331\201\330\255\330\251_\330\252\330\263\330\254\331\212\331\204_\330\257\330\256\331\210\331\204_\331\201\331\212_\330\250\330\261\331\206\330\247\331\205\330\254_\330\245\330\257\330\247\330\261\330\251_\330\247\331\204\330\243\330\256\330\250\330\247\330\261_NEWS_MANAGEMENT_\330\250\330\253\331\204\330\247\330\253\330\251.png);"));
        comboBox_favNews = new QComboBox(HomePage);
        comboBox_favNews->setObjectName("comboBox_favNews");
        comboBox_favNews->setGeometry(QRect(300, 460, 161, 31));
        comboBox_favNews->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(340, 130, 101, 41));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        pushButton_search = new QPushButton(HomePage);
        pushButton_search->setObjectName("pushButton_search");
        pushButton_search->setGeometry(QRect(320, 280, 141, 41));
        pushButton_search->setFont(font);
        pushButton_search->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        pushButton_favNews = new QPushButton(HomePage);
        pushButton_favNews->setObjectName("pushButton_favNews");
        pushButton_favNews->setGeometry(QRect(310, 360, 161, 41));
        pushButton_favNews->setFont(font);
        pushButton_favNews->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        pushButton_2 = new QPushButton(HomePage);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(320, 210, 141, 41));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        label = new QLabel(HomePage);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 40, 401, 81));
        QFont font1;
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setKerning(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: orange"));
        pushButton_back = new QPushButton(HomePage);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(360, 560, 91, 41));
        pushButton_back->setFont(font);
        pushButton_back->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));
        pushButton_showNew = new QPushButton(HomePage);
        pushButton_showNew->setObjectName("pushButton_showNew");
        pushButton_showNew->setGeometry(QRect(490, 460, 101, 29));
        pushButton_showNew->setStyleSheet(QString::fromUtf8("background-color: rgb(rgb(186, 255, 129)0, 0, 127);"));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        label_2->setText(QString());
        label_Image->setText(QString());
        pushButton->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        pushButton_search->setText(QCoreApplication::translate("HomePage", "Search", nullptr));
        pushButton_favNews->setText(QCoreApplication::translate("HomePage", "Favourite News", nullptr));
        pushButton_2->setText(QCoreApplication::translate("HomePage", "Display News", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "<html><head/><body><p><span style=\" font-size:18pt; color:#ffffff;\">News Management System </span></p></body></html>", nullptr));
        pushButton_back->setText(QCoreApplication::translate("HomePage", "Logout", nullptr));
        pushButton_showNew->setText(QCoreApplication::translate("HomePage", "Show New", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
