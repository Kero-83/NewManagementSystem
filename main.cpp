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
   //  NewsModel *n=new NewsModel("How A New Documentary Captures The Complexity Of Being A Child Of Immigrants","In \"Mija,\" director Isabel Castro combined music documentaries with the style of \"Euphoria\" and \"Clueless\" to tell a more nuanced immigration story.","22-9-2022","CULTURE & ARTS",0);
   //  //NewsModel *q=new NewsModel("Maury Wills, Base-Stealing Shortstop For Dodgers, Dies At 89","Maury Wills, who helped the Los Angeles Dodgers win three World Series titles with his base-stealing prowess, has died.","19-9-2022","SPORTS",0);
   //  //  NewsModel *e=new NewsModel("'Reboot' Is A Clever And Not Too Navel-Gazey Look Inside TV Reboot","Starring Keegan-Michael Key, Judy Greer and Johnny Knoxville, the Hulu show follows the revival of a fictional early 2000s sitcom.","20-9-2022","CULTURE & ARTS",0);
   //  //  NewsModel *d=new NewsModel("Biden Says Queen's Death Left 'Giant Hole' For Royal Family","U.S. President Joe Biden, in London for the funeral of Queen Elizabeth II, says his heart went out to the royal family, adding the queenâ€™s death left a â€œgiant hole.â€.","18-9-2022","POLITICS",0);
   //  //  NewsModel *t=new NewsModel("First Public Global Database Of Fossil Fuels Launches","On Monday, the worldâ€™s first public database of fossil fuel production, reserves and emissions launches.","18-9-2022","ENVIRONMENT",0);
   //  //  NewsModel *y=new NewsModel("'The Phantom Of The Opera' To Close On Broadway Next Year","â€œThe Phantom of the Operaâ€ â€” Broadwayâ€™s longest-running show â€” is scheduled to close in February 2023, a victim of post-pandemic softening in theater attendance in New York.","16-9-2022","ENTERTAINMENT",0);
   // // t->addnew(*t);//0
   //  //e->addnew(*e);//2
   //  //y->addnew(*y);//1
   //  //d->addnew(*d) ;//3
   //  //q->addnew(*q);//4
   //  n->addnew(*n);//5

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
