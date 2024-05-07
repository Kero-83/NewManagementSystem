#include "newsmodel.h"
#include "adminx.h"
#include <iomanip>
#include <ctime>
#include <sstream>
NewsModel::NewsModel()
{}
string NewsModel:: getCurrentDate() {
    time_t t = std::time(nullptr);
    tm tm = *std::localtime(&t);
    ostringstream oss;
    oss << setfill('0')
        << setw(2) << tm.tm_mday << "-" // Day
        << setw(2) << 1 + tm.tm_mon << "-" // Month (tm_mon is 0-11, so add 1)
        << 1900 + tm.tm_year; // Year
    return oss.str();
}
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
    this->title=title;
    this->description;
    this->date=date;
    this->category=category;
    avgRate=0;
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
void NewsModel::addnew(NewsModel New){
    Adminx::news.push_back(New);
}
