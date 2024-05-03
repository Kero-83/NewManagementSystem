#include "login.h"
#include"QVector"
#include <QApplication>
#include"QMessageBox"
#include "admin.h"
#include"newsmodel.h"
#include"newsbasedon.h"
using namespace std;
vector<User> Admin::users;
vector<NewsModel> Admin::news;    ;
int Login::count;
int Newsbasedon :: index;
vector<bool> Newsbasedon::checked={false,false,false};
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    Admin ad;
    NewsModel *n=new NewsModel("mario","m1","2/10","sport",4);
    NewsModel *q=new NewsModel("martin","m2","3/5","health",5);
    NewsModel *e=new NewsModel("t","d","1","sport",4.5);
    NewsModel *d=new NewsModel("1","2","3","sport",5);
    NewsModel *t=new NewsModel("w","s","2","health",4.5);
    NewsModel *y=new NewsModel("u","s","2","r",0.5);
    t->addnew(*t);//0
    y->addnew(*y);//1
   e->addnew(*e);//2
     d->addnew(*d) ;//3
   n->addnew(*n);//5
    q->addnew(*q);//4

    ad.ReadFromFiles();

    return a.exec();
}
