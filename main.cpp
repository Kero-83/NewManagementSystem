#include "login.h"
#include"QVector"
#include <QApplication>
#include"QMessageBox"
#include"newsmodel.h"
#include"newsbasedon.h"
#include"news.h"
using namespace std;
vector<User> Adminx::users;
vector<NewsModel> Adminx::news;
map<int,vector<string>>News::favNews;
map<pair<int,string>,int>User::Rates;
int Login::count;
int Newsbasedon :: index;
string Adminx::NewCat;
vector<bool> Newsbasedon::checked={false,false,false,false};
vector<bool> Adminx::checkedAdmin={false,false,false,false};
vector<bool> Adminx::backbuttons={false,false,false,false};

void test(){
    NewsModel h;
    string date=h.getCurrentDate();
    NewsModel *n=new NewsModel("mario","m1",date,"sport",0);
    NewsModel *q=new NewsModel("martin","m2",date,"health",0);
    NewsModel *e=new NewsModel("t","d",date,"health",0);
    NewsModel *d=new NewsModel("1","2",date,"hk",0);
    NewsModel *t=new NewsModel("w","w11",date,"hm",0);
    NewsModel *y=new NewsModel("h","s",date,"hr",0);
    t->addnew(*t);//0
    e->addnew(*e);//2
    y->addnew(*y);//1
    d->addnew(*d) ;//3
    n->addnew(*n);//5
    q->addnew(*q);//4
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    Adminx*r=new Adminx();
    r->ReadFromFiles();
    qDebug() << Adminx::news.size() << r->newsSize;
   // test();
    for(auto it:User::Rates){
       qDebug()<<it.first.second<<it.second;
   }
    return a.exec();
   return 0;
}
