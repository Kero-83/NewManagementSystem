#ifndef USER_H
#define USER_H
#include "stdafx.h"
using namespace std;
enum class BasedOn
{
    time,
    category,
    trending
};
class User
{
private:
    string firstname;
    string lastname;
    string username;
    string password;
    string region;
    string email;

public:
    User();
    User( string username,string password, string region, string email);
    User(string firstname,string lastname,string username,string password,string email);
    String category ;
    double rate ;

    void Search();
    void ShowNew(BasedOn basedOn);
    void RateNew();
    void Bookmark();

    void ReadData();
    void setUsername(string username);
    void setPassword(string password);
    void setRegion(string region);
    void setEmail(string email);
    string getFirstName();
    string getLastName();
    string getUsername();
    string getPassword();
    string getRegion();
    string getEmail();
    static void addUser(User);

};

#endif // USER_H
