#include "newsmodel.h"

NewsModel::NewsModel()
{}

NewsModel::NewsModel(string title, string description, string date, string category,double avgRate)
{
    this->title = title;
    this->description = description;
    this->date = date;
    this->category = category;
    this->avgRate = avgRate;
}

NewsModel::NewsModel(string title, string description, string date, string category)
{
    NewsModel(title, description, date, category, 0.0);
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
void NewsModel::setAvgRate(double avgRate)
{
    this->avgRate = avgRate;
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
