#include "login.h"
//#include"user.h"
#include"QVector"
#include <QApplication>
#include"QMessageBox"
#include "admin.h"
#include"homepage.h"
#include"admin.h"
using namespace std;
vector<User> Admin::users;
vector<NewsModel> Admin::news ;
int Login::count;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();
    Admin ad;
    ad.ReadFromFiles();

    return a.exec();
}
