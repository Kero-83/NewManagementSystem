#ifndef USER_H
#define USER_H
#include "stdafx.h"
#include"newsmodel.h"


using namespace std;

enum class SearchBasedOn {
    Keyword,
    titles,
    date,
    notAdded
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
    vector<NewsModel> _searchByKeywords(string);
    vector<NewsModel> _searchByTitles(string);
    vector<NewsModel> _searchByDate(string);
public:
    vector<NewsModel> rate;
    vector<NewsModel> favourites;
    User();
    User( string username,string password, string region, string email);
    User(string firstname,string lastname,string username,string password,string email);
    String category ;
    //double rate ;

    vector<NewsModel> Search(SearchBasedOn searchBasedOn, string inp);
    void ShowNewBasedOnCategory();
    void RateNew(NewsModel news, double rate);
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
