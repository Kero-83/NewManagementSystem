#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class Adminwindow;
}

class Adminwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Adminwindow(QWidget *parent = nullptr);
    ~Adminwindow();

private slots:
    void on_Add_remove_category_clicked();

    void on_Add_Categ_clicked();

    void on_Remove_Categ_clicked();

    void on_Add_Remove_new_clicked();

    void on_Add_New_clicked();

    void on_Remove_New_clicked();

    void on_pushButton_clicked();

    void on_Add_c_ok_clicked();

    void on_remove_c_ok_clicked();

private:
    Ui::Adminwindow *ui;
};

#endif // ADMINWINDOW_H
