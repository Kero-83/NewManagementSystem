#include "newsmodel.h"
#include "admin.h"
NewsModel::NewsModel()
{}

NewsModel::NewsModel(string title, string description, string date, string category, double avgRate, set<int> ratedUsersIds, map<int, int> rates)
{
    this->title = title;
    this->description = description;
    this->date = date;
    this->category = category;
    this->avgRate = avgRate;
    this->ratedUsersIds = ratedUsersIds;
    this->rates = rates;
    buildTitles();
    buildKeyWords();
}
NewsModel::NewsModel(string title, string description, string date, string category, double avgRate)
{
    NewsModel(title, description, date, category, avgRate, {}, {});
}
NewsModel::NewsModel(string title, string description, string date, string category)
{
    NewsModel(title, description, date, category, 0, {}, {});
}

void NewsModel::setTitle(string title)
{
    this->title = title;
}
void NewsModel::setDescription(string description)
{
    this->description = description;
}
void NewsModel::setDate(string date)
{
    this->date = date;
}
void NewsModel::setCategory(string category)
{
    this->category = category;
}

string NewsModel::getTitle()
{
    return title;
}
string NewsModel::getDescription()
{
    return description;
}
string NewsModel::getCategory(){
    return category;
}
string NewsModel::getDate()
{
    return date;
}
double NewsModel::getAvgRate()
{
    return avgRate;
}

void NewsModel::addnew(){
    Admin::news.push_back(*this);
}
void NewsModel::buildKeyWords()
{
    int cur = 0;
    for(int i = 0; i < description.size(); i++)
    {
        if(isspace(description[i]))
        {
            keywords.insert(description.substr(cur, i));
            cur = i + 1;
        }
    }
}

void NewsModel::buildTitles()
{
    int cur = 0;
    for(int i = 0; i < title.size(); i++)
    {
        if(isspace(title[i]))
        {
            titles.insert(title.substr(cur, i));
            cur = i + 1;
        }
    }
}
