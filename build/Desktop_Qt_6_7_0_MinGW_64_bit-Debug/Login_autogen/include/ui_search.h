/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QPushButton *searchButton;
    QLabel *label;
    QLineEdit *lineEdit_Search;
    QComboBox *comboBox_news;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QComboBox *comboBox_dates;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *searchButton_2;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_back;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName("Search");
        Search->resize(800, 600);
        searchButton = new QPushButton(Search);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(920, 190, 31, 30));
        label = new QLabel(Search);
        label->setObjectName("label");
        label->setGeometry(QRect(-110, -160, 911, 911));
        label->setStyleSheet(QString::fromUtf8("image: url(:/build/Desktop_Qt_6_7_0_MinGW_64_bit-Debug/Photos/realistic-news-studio-background_23-2149985600.png);"));
        lineEdit_Search = new QLineEdit(Search);
        lineEdit_Search->setObjectName("lineEdit_Search");
        lineEdit_Search->setGeometry(QRect(140, 200, 571, 29));
        lineEdit_Search->setStyleSheet(QString::fromUtf8("border-radius: 10px;\n"
"border-style: solid;\n"
"    border-width: 2px;\n"
"box-shadow: 10px 10px 5px grey;\n"
"border-color: blue;"));
        comboBox_news = new QComboBox(Search);
        comboBox_news->setObjectName("comboBox_news");
        comboBox_news->setGeometry(QRect(398, 240, 351, 29));
        pushButton_3 = new QPushButton(Search);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(590, 90, 161, 61));
        label_2 = new QLabel(Search);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 200, 81, 31));
        comboBox_dates = new QComboBox(Search);
        comboBox_dates->setObjectName("comboBox_dates");
        comboBox_dates->setGeometry(QRect(70, 240, 281, 29));
        pushButton = new QPushButton(Search);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 90, 161, 61));
        pushButton_4 = new QPushButton(Search);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(70, 340, 681, 30));
        searchButton_2 = new QPushButton(Search);
        searchButton_2->setObjectName("searchButton_2");
        searchButton_2->setGeometry(QRect(360, 240, 31, 30));
        comboBox = new QComboBox(Search);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(70, 270, 681, 29));
        pushButton_2 = new QPushButton(Search);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 90, 161, 61));
        pushButton_back = new QPushButton(Search);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(710, 560, 81, 30));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        searchButton->setText(QString());
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Search", "By title", nullptr));
        label_2->setText(QCoreApplication::translate("Search", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; color:#ffffff;\">Search :</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Search", "By Date", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Search", "Show News", nullptr));
        searchButton_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Search", "By Keywords", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Search", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
