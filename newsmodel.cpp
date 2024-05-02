#include "newsmodel.h"
#include "admin.h"
NewsModel::NewsModel()
{}

NewsModel::NewsModel(string title, string description, string date, string category, set<int> ratedUsersIds, vector<Rate> rates)
{
    this->title = title;
    this->description = description;
    this->date = date;
    this->category = category;
    this->ratedUsersIds = ratedUsersIds;
    this->rates = rates;
}

NewsModel::NewsModel(string title, string description, string date, string category)
{
    NewsModel(title, description, date, category, {}, {});
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
    double totalRates = 0;
    double count = 0;
    for(auto &rate : rates)
    {
        totalRates += rate.rate;
        count++;
    }
    return ((count) ? (totalRates / count) : 0.0);
}
void NewsModel::addnew(NewsModel New){
    Admin::news.push_back(New);
}
