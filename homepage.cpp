#include "homepage.h"
#include "ui_homepage.h"
#include "login.h" // Make sure to include the header for Login
#include"myprofile.h"
#include"newsbasedon.h"
#include"news.h"

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    ui->comboBox_favNews->hide();
    ui->pushButton_showNew->hide();
}

void HomePage::setUserId(int userId){
    this->userId = userId;
}
void HomePage::show_window(){
    show();
}
void HomePage::close_window(){
    close();
}
HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_back_clicked()
{
    hide();
    Login *log=new Login(this);
    log->show();
}
void HomePage::on_pushButton_clicked()
{
    hide();
    MyProfile*profile=new MyProfile(this);
    profile->show();
    profile->DisplayData();
}


void HomePage::on_pushButton_2_clicked()
{
    Adminx::backbuttons[0]=true;
    Adminx::backbuttons[1]=false;
    Adminx::backbuttons[2]=false;
    Newsbasedon *newsbasedon=new Newsbasedon(this) ;\
        hide() ;
    newsbasedon->show() ;
}


void HomePage::on_pushButton_favNews_clicked()
{
    Adminx::backbuttons[1]=true;
    Adminx::backbuttons[0]=false;
    Adminx::backbuttons[2]=false;
    ui->pushButton_showNew->show();
    ui->comboBox_favNews->clear();
    ui->comboBox_favNews->show();
    for(auto it:News::favNews)
        if(it.first==Login::count){
            for(int i=0;i<it.second.size();i++){
                ui->comboBox_favNews->addItem(it.second[i].c_str());
        }
        }
}

void HomePage::on_pushButton_showNew_clicked()
{
    News*n=new News(this);
  string title=ui->comboBox_favNews->currentText().toStdString();
    for(int i=0;i<Adminx::news.size();i++){
      if(title==Adminx::news[i].getTitle()){
            Newsbasedon::index=i;
        }
  }
    hide();
    n->show();
  n->displayNew();
}

void HomePage::on_pushButton_search_clicked()
{
    hide();
    Search *search = new Search(this);
    search->show();

}

