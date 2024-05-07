#ifndef NEWS_H
#define NEWS_H
#include"stdafx.h"
#include <QMainWindow>

namespace Ui {
class News;
}

class News : public QMainWindow
{
    Q_OBJECT

public:
    explicit News(QWidget *parent = nullptr);

    static map<int,vector<string>>favNews;
    double average=0;
    int rateCount= 0 ;
    double  RateAverage(double rate) ;
    ~News();
    void displayNew();
    void AddNew();
    bool checkValidateOfTitle();
    void showEditButtons();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_saveNewAdmin_clicked();

    void on_pushButton_editTitle_clicked();

    void on_pushButton_editDesc_clicked();

    void on_checkBox_favNews_clicked(bool checked);


    // void on_pushButton_3_clicked();

private:
    Ui::News *ui;
};

#endif // NEWS_H
