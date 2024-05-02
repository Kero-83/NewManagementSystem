#ifndef NEWS_H
#define NEWS_H

#include <QMainWindow>

namespace Ui {
class News;
}

class News : public QMainWindow
{
    Q_OBJECT

public:
    explicit News(QWidget *parent = nullptr);

    double average=0;
    int rateCount= 0 ;
    double  RateAverage(double rate) ;
    ~News();
    void displayNew();

private slots:
    void on_pushButton_clicked();

private:
    Ui::News *ui;
};

#endif // NEWS_H
