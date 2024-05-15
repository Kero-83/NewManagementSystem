#include "search.h"
#include "qmessagebox.h"
#include "ui_search.h"
#include "homepage.h"
#include "news.h"
#include "newsbasedon.h"

Search::Search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Search)
{
    ui->setupUi(this);
    _searchBasedOn = SearchBasedOn::notAdded;
    // Load the icon from your resources
    QIcon searchIcon("Resourses/search.png");
    // Set the icon to the button
    ui->searchButton->setIcon(searchIcon);

    // hide Search(title, keywords) items
    ui->lineEdit_Search->hide();
    ui->comboBox->hide();
    ui->label->hide();
    ui->searchButton->hide();

    // hide Search(date) items
    ui->comboBox_dates->hide();
    ui->comboBox_news->hide();
    ui->searchButton_2->hide();

    // hide show news button
    ui->pushButton_4->hide();

}

Search::~Search()
{
    delete ui;
}

void Search::on_pushButton_clicked()
{
    ui->comboBox_news->clear();
    ui->pushButton->setStyleSheet(_clickedStyleSheet);
    ui->pushButton_2->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_3->setStyleSheet(_defaultStyleSheet);
    _searchBasedOn = SearchBasedOn::date;
    // hide Search(title, keywords) items
    ui->lineEdit_Search->hide();
    ui->comboBox->hide();
    ui->label->hide();
    ui->searchButton->hide();
    // show search by date items
    ui->comboBox_dates->show();
    ui->comboBox_news->show();
    ui->searchButton_2->show();
    // show Show News Button;
    ui->pushButton_4->show();
    // Logic of Search By Date
    ui->comboBox_dates->clear();
    for(auto newsModel : Adminx::news)
    {
        _newsByDate[newsModel.getDate()].push_back(newsModel);
    }
    for(auto &[key, list] : _newsByDate)
    {
        ui->comboBox_dates->addItem(key.c_str());
    }
    if(ui->comboBox_dates->itemText(ui->comboBox_dates->currentIndex()).isEmpty()){
        ui->comboBox_dates->removeItem(ui->comboBox_dates->currentIndex());
    }
}


void Search::on_pushButton_2_clicked()
{
    ui->pushButton->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_2->setStyleSheet(_clickedStyleSheet);
    ui->pushButton_3->setStyleSheet(_defaultStyleSheet);
    _searchBasedOn = SearchBasedOn::Keyword;
    // hide Search(date) items
    ui->comboBox_dates->hide();
    ui->comboBox_news->hide();
    ui->searchButton_2->hide();
    // show search by keywords items
    ui->lineEdit_Search->show();
    ui->comboBox->show();
    ui->label->show();
    ui->searchButton->show();
    // show Show News Button
    ui->pushButton_4->show();
}


void Search::on_pushButton_3_clicked()
{
    ui->pushButton->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_2->setStyleSheet(_defaultStyleSheet);
    ui->pushButton_3->setStyleSheet(_clickedStyleSheet);
    _searchBasedOn = SearchBasedOn::titles;
    // hide Search(date) items
    ui->comboBox_dates->hide();
    ui->comboBox_news->hide();
    ui->searchButton_2->hide();

    // show search by title items
    ui->lineEdit_Search->show();
    ui->comboBox->show();
    ui->label->show();
    ui->searchButton->show();
    // show Show News Button
    ui->pushButton_4->show();
}


void Search::on_searchButton_clicked()
{
    ui->comboBox->clear();
    int id = Login::count;
    if(_searchBasedOn == SearchBasedOn::notAdded)
    {
        QMessageBox::warning(this, "error", "No Selected Type of Search!");
        return;
    }

    String searchInput = ui->lineEdit_Search->text().toStdString();
    for(int it = 0; it < searchInput.size(); it++)
    {
        searchInput[it] = tolower(searchInput[it]);
    }
    _searchAns = Adminx::users[id].Search(_searchBasedOn, searchInput);
    for (auto news : _searchAns) {
        ui->comboBox->addItem(QString(news.getTitle().c_str()));
    }
}


void Search::on_pushButton_back_clicked()
{
    hide();
    HomePage *homePage = new HomePage(this);
    homePage->show();
}


void Search::on_searchButton_2_clicked()
{
    ui->comboBox_news->clear();
    _searchAns = _newsByDate[ui->comboBox_dates->currentText().toStdString()];
    for (auto news : _searchAns) {
        ui->comboBox_news->addItem(QString(news.getTitle().c_str()));
    }
}


void Search::on_pushButton_4_clicked()
{
    Adminx::backbuttons[3] = true;
    Adminx::backbuttons[2] = false;
    Adminx::backbuttons[1] = false;
    Adminx::backbuttons[0] = false;
    hide();
    if(_searchBasedOn == SearchBasedOn::date)
    {
        for(int i = 0; i < Adminx::news.size(); i++)
        {
            if(ui->comboBox_news->currentText().toStdString() == Adminx::news[i].getTitle())
            {
                Newsbasedon::index = i;
            }
        }
    }
    else
    {
        for(int i = 0; i < Adminx::news.size(); i++)
        {
            if(ui->comboBox->currentText().toStdString() == Adminx::news[i].getTitle())
            {
                Newsbasedon::index = i;
            }
        }
    }
    News *news = new News(this);
    news->show();
    news->displayNew();
}

