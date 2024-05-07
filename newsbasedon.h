#ifndef NEWSBASEDON_H
#define NEWSBASEDON_H

#include <QMainWindow>
#include"stdafx.h"

namespace Ui {
class Newsbasedon;
}

class Newsbasedon : public QMainWindow
{
    Q_OBJECT

public:
    explicit Newsbasedon(QWidget *parent = nullptr);
    ~Newsbasedon();

private slots:
    void on_pushButton_Category_clicked();

    void on_pushButton_back_clicked();
    void on_pushButton_showNew_clicked();

    void on_pushButton_showTitle_clicked();

    void on_pushButton_Rate_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    void on_pushButton_Time_clicked();

    void on_pushButton_descendingRate_clicked();

public:
    string currentCat;
    string currentTitle;
   static int index;
    static vector<bool>checked;
   void ShowNewBasedOnDate();
    void ShowNewBasedOnCategory();
    void ShowNewBasedOnRating();
    void selectTitleToCategory();
    int selectTrendingTitles();
    void PushTitlesIntoComboBox();
    void ShowNewBasedOnDescendingRating();
    void RemoveDublicates();
private:
    Ui::Newsbasedon *ui;
};

#endif // NEWSBASEDON_H
