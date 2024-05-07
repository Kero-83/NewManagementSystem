#include "favourites.h"
#include "ui_favourites.h"

Favourites::Favourites(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Favourites)
{
    ui->setupUi(this);
}

Favourites::~Favourites()
{
    delete ui;
}
