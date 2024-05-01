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
    double avgRate;
public:
    NewsModel();
    NewsModel(string, string, string,string, double);
    NewsModel(string, string, string, string);
    void setTitle(string);
    void setDescription(string);
    void setDate(string);
    void setCategory(string);
    void setAvgRate(double);
    string getTitle();
    string getDescription();
    string getDate();
    string getCategory();
    double getAvgRate();

};

#endif // NEWSMODEL_H
