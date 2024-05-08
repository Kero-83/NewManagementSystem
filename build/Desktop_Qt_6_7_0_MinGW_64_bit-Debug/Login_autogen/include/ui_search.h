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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QComboBox *comboBox;
    QLineEdit *lineEdit_Search;
    QPushButton *searchButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_back;
    QComboBox *comboBox_dates;
    QComboBox *comboBox_news;
    QPushButton *searchButton_2;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName("Search");
        Search->resize(1299, 647);
        pushButton = new QPushButton(Search);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 150, 161, 61));
        pushButton_2 = new QPushButton(Search);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 150, 161, 61));
        pushButton_3 = new QPushButton(Search);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(740, 150, 161, 61));
        label = new QLabel(Search);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 260, 61, 31));
        comboBox = new QComboBox(Search);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(220, 330, 681, 29));
        lineEdit_Search = new QLineEdit(Search);
        lineEdit_Search->setObjectName("lineEdit_Search");
        lineEdit_Search->setGeometry(QRect(290, 260, 571, 29));
        searchButton = new QPushButton(Search);
        searchButton->setObjectName("searchButton");
        searchButton->setGeometry(QRect(870, 260, 31, 30));
        pushButton_4 = new QPushButton(Search);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(220, 390, 681, 30));
        pushButton_back = new QPushButton(Search);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(220, 90, 51, 30));
        comboBox_dates = new QComboBox(Search);
        comboBox_dates->setObjectName("comboBox_dates");
        comboBox_dates->setGeometry(QRect(220, 300, 281, 29));
        comboBox_news = new QComboBox(Search);
        comboBox_news->setObjectName("comboBox_news");
        comboBox_news->setGeometry(QRect(548, 300, 351, 29));
        searchButton_2 = new QPushButton(Search);
        searchButton_2->setObjectName("searchButton_2");
        searchButton_2->setGeometry(QRect(510, 300, 31, 30));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Search", "By Date", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Search", "By Keywords", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Search", "By title", nullptr));
        label->setText(QCoreApplication::translate("Search", "Search :", nullptr));
        searchButton->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("Search", "Show News", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Search", "Back", nullptr));
        searchButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
