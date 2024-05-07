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

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    NewsModel h;
    Adminx*r=new Adminx();
    string date=h.getCurrentDate();
    NewsModel *n=new NewsModel("mario","m1",date,"sport",4);
     NewsModel *q=new NewsModel("martin","m2",date,"health",5);
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
    for(auto it:User::Rates){
       qDebug()<<it.first.second<<it.second;
   }
    return a.exec();
}
