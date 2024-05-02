#ifndef NEWSMODEL_H
#define NEWSMODEL_H
#include "stdafx.h"
struct Rate {
    int userId;
    int rate;
};

class NewsModel
{
private:
    string title;
    string description;
    string date;
    string category;
public:
    set<int> ratedUsersIds;
    vector<Rate> rates;
    NewsModel();
    NewsModel(string, string, string,string, set<int>, vector<Rate>);
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

};

#endif // NEWSMODEL_H
