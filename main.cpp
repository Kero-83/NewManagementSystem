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
    Adminx*r=new Adminx();
    r->ReadFromFiles();
    qDebug() << Adminx::news.size() << r->newsSize;
    for(auto it:User::Rates){
       qDebug()<<it.first.second<<it.second;
   }
    return a.exec();
   return 0;
}
