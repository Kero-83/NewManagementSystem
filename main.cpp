#include "login.h"
#include"QVector"
#include <QApplication>
#include"QMessageBox"
#include "admin.h"
#include"newsmodel.h"
#include"newsbasedon.h"
#include"login.h"
using namespace std;
vector<User> Admin::users;
vector<NewsModel> Admin::news;
map<string ,vector<string>>Admin::AddCategoy_New;

int Login::count;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    Admin ad;
    NewsModel *n=new NewsModel("a","b","c","d",4);
    NewsModel *q=new NewsModel("c","d","ce","w",5);
   NewsModel *e=new NewsModel("t","d","1","c",3);
    NewsModel *d=new NewsModel("w","s","2","a",0.5);
   e->addnew();
    n->addnew();
    d->addnew();
    q->addnew();
    ad.ReadFromFiles();

    return a.exec();
}
