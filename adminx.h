#ifndef ADMINX_H
#define ADMINX_H
#include"user.h"
#include"newsmodel.h"
#include <QDialog>

namespace Ui {
class Adminx;
}

class Adminx : public QDialog
{
    Q_OBJECT

public:
    static string NewCat;
    explicit Adminx(QWidget *parent = nullptr);
    static vector<User>users;
    static vector<NewsModel> news;
    static vector<bool>checkedAdmin;
    static vector<bool>backbuttons;
    void WriteInFiles();
    void ReadFromFiles();
    ~Adminx();

private slots:
    void on_pushButton_addNew_clicked();

    void on_pushButton_newCategory_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_currentCategory_clicked();

    void on_pushButton_OkNewCategory_clicked();

    void on_pushButton_OkCurrentCategory_clicked();

    void on_pushButton_updateNew_clicked();

    void on_pushButton_Ok_clicked();

    void on_pushButton_removeNew_clicked();


    void on_pushButton_DisplayAvgRate_clicked();

private:
    Ui::Adminx *ui;
    void WriteUserDataInFiles();
    void WriteNewsDataInFiles();
    void WriteFavNewInFiles();
    void ReadFavNewFromFiles();
    void ReadUserDataFromFiles();
    void ReadNewsDataFromFiles();
};

#endif // ADMINX_H
