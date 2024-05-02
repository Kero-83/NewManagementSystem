#include "newsbasedon.h"
#include "homepage.h"
#include "ui_newsbasedon.h"
#include"stdafx.h"
#include"news.h"
Newsbasedon::Newsbasedon(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Newsbasedon)
{
    ui->setupUi(this);
    ui->CaegoryList->hide() ;
    ui->showNew->hide() ;
    ui->comboBox->hide();
    ui->label_3->hide();
    ui->label_4->hide();
}
 vector<QString>tite;
Newsbasedon::~Newsbasedon()
{
    delete ui;
}

void Newsbasedon::on_Category_clicked()
{
    ui->CaegoryList->show();
    ui->showNew->show();
    ShowNewBasedOnCategory();
}

void Newsbasedon::ShowNewBasedOnCategory(){
    ui->CaegoryList->clear();
    for(int i=0;i<Admin::news.size();i++){
        //rate condition
        ui->CaegoryList->addItem(Admin::news[i].getCategory().c_str());
        if(ui->CaegoryList->currentText().toStdString()==Admin::news[i].getCategory()){
            tite.push_back(Admin::news[i].getTitle().c_str());
    }
    }

}
void Newsbasedon:: ShowNewBasedOnRating(){
    multimap<double,NewsModel>New;
    for(int i=0;i<Admin::news.size();i++){
        New.insert({Admin::news[i].getAvgRate(),Admin::news[i]});
    }
    stack<NewsModel>n;
    for(auto t:New){
        if (t.second.getAvgRate()>3.5)
        n.push(t.second);
    }
    int x=n.size();
    for(int i=0;i<x;i++){
    string q=n.top().getTitle()+" " +"("+n.top().getCategory()+")";
    ui->comboBox->addItem(q.c_str());
    n.pop();
    }
}

void Newsbasedon::on_pushButton_back_clicked()
{
    hide();
    HomePage *hp=new HomePage(this);
    hp->show();
}


void Newsbasedon::on_showNew_clicked()
{
    hide();
    News*n=new News(this);
    n->show();
    n->displayNew();
}


void Newsbasedon::on_pushButton_clicked()
{
    ui->comboBox->show();
    ui->comboBox->clear();
    ui->label_2->show();
    for(int i=0;i<tite.size();i++){
        ui->comboBox->addItem(tite[i]);
    }
}
int Newsbasedon::selectTitleToCategory(){
    for(int i=0;i<Admin::news.size();i++){
        if(ui->comboBox->currentText().toStdString()==Admin::news[i].getTitle()){
            index=i;
        }
    }
    return index;
}
void Newsbasedon::on_Rate_clicked()
{

    ui->CaegoryList->show();
    ui->showNew->show();
    ui->CaegoryList->clear();
    ShowNewBasedOnRating();
}

