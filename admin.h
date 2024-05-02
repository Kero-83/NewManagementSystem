#ifndef ADMIN_H
#define ADMIN_H
#include"user.h"
#include"newsmodel.h"
class Admin
{
private:
    void WriteUserDataInFiles();
    void WriteNewsDataInFiles();
    void ReadUserDataFromFiles();
    void ReadNewsDataFromFiles();
public:

    static vector<User>users;
    static vector<NewsModel> news;
   static map<String,vector<string>>AddCategoy_New ;
    Admin();
    void WriteInFiles();
    void ReadFromFiles();

};

#endif // HH_H
