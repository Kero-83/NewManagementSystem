#ifndef FAVOURITES_H
#define FAVOURITES_H
#include "stdafx.h"
#include "login.h"
#include "newsmodel.h"
#include <QDialog>

namespace Ui {
class Favourites;
}

class Favourites : public QDialog
{
    Q_OBJECT

public:
    explicit Favourites(QWidget *parent = nullptr);
    ~Favourites();

private:
    Ui::Favourites *ui;
    vector<NewsModel> _news;
};

#endif // FAVOURITES_H
