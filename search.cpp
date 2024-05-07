#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Search)
{
    ui->setupUi(this);
    // Load the icon from your resources
    QIcon searchIcon("./Resourses/search.png");
    // Set the icon to the button
    ui->searchButton->setIcon(searchIcon);
}

Search::~Search()
{
    delete ui;
}

void Search::on_pushButton_clicked()
{
    ui->pushButton->setStyleSheet(_clickedStyleSheet);
    ui->pushButton_2->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_3->setStyleSheet(_defaultStyleSheet);
    _searchBasedOn = SearchBasedOn::date;
}


void Search::on_pushButton_2_clicked()
{
    ui->pushButton->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_2->setStyleSheet(_clickedStyleSheet);
    ui->pushButton_3->setStyleSheet(_defaultStyleSheet);
    _searchBasedOn = SearchBasedOn::Keyword;
}


void Search::on_pushButton_3_clicked()
{
    ui->pushButton->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_2->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_3->setStyleSheet(_clickedStyleSheet);
    _searchBasedOn = SearchBasedOn::titles;
}


void Search::on_searchButton_clicked()
{
    ui->comboBox->clear();
    int id = Login::count;
    _searchAns = Admin::users[id].Search(_searchBasedOn, ui->lineEdit_Search->text().toStdString());
    for (auto news : _searchAns) {
        ui->comboBox->addItem(QString(news.getTitle().c_str()));
    }
}

