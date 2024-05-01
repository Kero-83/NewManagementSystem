#include "admin.h"
Admin::Admin() {}


void Admin::WriteUserDataInFiles()
{
    fstream file("usersData.txt",ios::out);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for (int i = 0; i < users.size(); i++) {
        file << users[i].getFirstName()<<" "<<users[i].getLastName()<<" "<<users[i].getUsername() << " " << users[i].getPassword() << " " << users[i].getEmail() << ((i == (users.size() - 1)) ? "" : "\n");
    }
    qDebug() << "1233";
    file.close();
}
void Admin::WriteNewsDataInFiles()
{
    fstream file("newsData.txt",ios::out);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for (int i = 0; i < news.size(); i++) {
        file << news[i].getTitle() << news[i].getDescription() << news[i].getDate() << news[i].getCategory() << news[i].getAvgRate() << ((i == (news.size() - 1)) ? " " : "\n");
    }
    qDebug() << "1243";
    file.close();
}


void Admin::ReadUserDataFromFiles()
{
    User temp;
    fstream file("usersData.txt",ios::in);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for(int i=0;!file.eof();i++)
    {
        string tfirstname;
        string tlastname;
        string tusername;
        string tpassword;
        string temail;
        file >>tfirstname>>tlastname>>tusername>>tpassword>>temail;
        temp=User(tfirstname,tlastname,tusername,tpassword,temail);
        users.push_back(temp);
    }

}

void Admin::ReadNewsDataFromFiles()
{
    NewsModel newsModel;
    fstream file("newsData.txt",ios::in);
    if(!file){
        qDebug()<<"file not found";
        return;
    }
    for(int i = 0;!file.eof(); i++)
    {
        string title;
        string description;
        string date;
        string category;
        double avgRate;
        file >> title >> description >> date >> category >> avgRate;
        newsModel = NewsModel(title, description, date, category, avgRate);
        news.push_back(newsModel);
    }
}


void Admin::WriteInFiles()
{
    WriteNewsDataInFiles();
    WriteUserDataInFiles();
}

void Admin::ReadFromFiles()
{
    ReadUserDataFromFiles();
    ReadNewsDataFromFiles();
}

