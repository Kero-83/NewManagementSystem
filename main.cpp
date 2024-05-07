#include "login.h"
#include"QVector"
#include <QApplication>
#include"QMessageBox"
#include"newsmodel.h"
#include"newsbasedon.h"
#include"news.h"
#include "homepage.h"
using namespace std;
vector<User> Adminx::users;
vector<NewsModel> Adminx::news;
map<int,vector<string>>News::favNews;
int Login::count;
int Newsbasedon :: index;
string Adminx::NewCat;
vector<bool> Newsbasedon::checked={false,false,false,false};
vector<bool> Adminx::checkedAdmin={false,false,false,false};
vector<bool> Adminx::backbuttons={false,false,false,false};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HomePage w;
    w.show();
    NewsModel h;
    Adminx*r=new Adminx();
    string date=h.getCurrentDate();
    NewsModel *n=new NewsModel("mario","m1 m5 m2",date,"sport",4);
    NewsModel *q=new NewsModel("martin","m2 m3 m4",date,"health",5);
    NewsModel *e=new NewsModel("t","d",date,"health",4.5);
    NewsModel *d=new NewsModel("1","2",date,"hk",5);
    NewsModel *t=new NewsModel("w","w11",date,"hm",4.5);
    NewsModel *y=new NewsModel("h","s",date,"hr",1);
    t->addnew(*t);//0
    e->addnew(*e);//2
    y->addnew(*y);//1
    d->addnew(*d) ;//3
    n->addnew(*n);//5
    q->addnew(*q);//4
    r->ReadFromFiles();


    return a.exec();
}
