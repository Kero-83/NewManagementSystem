#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "stdafx.h"
#include"login.h"

namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    void setUserId(int userId);
    ~HomePage();
    void close_window();
    void show_window();
private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_favNews_clicked();

    void on_pushButton_showNew_clicked();

private:
    int userId;
    Ui::HomePage *ui;
};

#endif // HOMEPAGE_H
