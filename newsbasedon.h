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
    void on_Category_clicked();

    void on_pushButton_back_clicked();
    void on_showNew_clicked();

    void on_pushButton_clicked();

    void on_Rate_clicked();

public:
    int index;
    void ShowNewBasedOnCategory();
    void ShowNewBasedOnRating();
    int selectTitleToCategory();
    int selectTrendingTitles();
private:
    Ui::Newsbasedon *ui;
};

#endif // NEWSBASEDON_H
