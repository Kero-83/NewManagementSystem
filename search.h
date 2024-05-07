#ifndef SEARCH_H
#define SEARCH_H
#include "stdafx.h"
#include "newsmodel.h"
#include "user.h"
#include "admin.h"
#include "login.h"
#include <QDialog>
const QString _clickedStyleSheet = "background-color: grey; color: white;";
const QString _defaultStyleSheet = "";
namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_searchButton_clicked();

private:
    Ui::Search *ui;
    SearchBasedOn _searchBasedOn;
    vector<NewsModel> _searchAns;
};

#endif // SEARCH_H
