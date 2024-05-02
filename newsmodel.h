#ifndef NEWSMODEL_H
#define NEWSMODEL_H
#include "stdafx.h"

class NewsModel
{
private:
    string title;
    string description;
    string date;
    string category;

public:
    double avgRate;
    set<int> ratedUsersIds;
    map<int, int> rates;
    NewsModel();
    NewsModel(string, string, string,string,double, set<int>, map<int, int>);
    NewsModel(string, string, string,string,double);
    NewsModel(string, string, string, string);
    void setTitle(string);
    void setDescription(string);
    void setDate(string);
    void setCategory(string);
    string getTitle();
    string getDescription();
    string getDate();
    string getCategory();
    double getAvgRate();
    void addnew();
};

#endif // NEWSMODEL_H
