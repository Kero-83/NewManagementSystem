#include "newsmodel.h"
#include "adminx.h"
#include <iomanip>
#include <ctime>
#include <sstream>

bool isSymbol(char ch) {
    return !std::isalpha(ch) && !std::isdigit(ch) && !std::isspace(ch);
}

NewsModel::NewsModel()
{}

NewsModel::NewsModel(string title, string description, string date, string category, double avgRate, map<int, int> rates)
{
    this->title = title;
    this->description = description;
    this->date = date;
    this->category = category;
    this->avgRate = avgRate;
    this->rates = rates;
    buildTitles();
    buildKeywords();
}

NewsModel::NewsModel(string title, string description, string date, string category,double avgRate)
{
    this->title = title;
    this->description = description;
    this->date = date;
    this->category = category;
    this->avgRate = avgRate;
    buildTitles();
    buildKeywords();
}

NewsModel::NewsModel(string title, string description, string date, string category)
{
    NewsModel(title,description,date,category,0.0);
}

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
void NewsModel::addnew(NewsModel New){
    Adminx::news.push_back(New);
}

void NewsModel::buildKeywords()
{
    int cur = 0;
    for(int i = 0; i < description.size(); i++)
    {
        if(isspace(description[cur]) || isSymbol(description[cur]))
        {
            cur++;
        }
        if(cur > i)
        {
            continue;
        }
        if(isspace(description[i]) || isSymbol(description[i]))
        {
            String subStr = description.substr(cur, i);
            for(int j = 0; j < subStr.size(); j++)
            {
                subStr[j] = tolower(subStr[j]);
            }
            if(subStr != "an" && subStr != "a" && subStr != "the")
            {
                keywords.insert(subStr);
            }
            cur = i + 1;
        }
        if(i == description.size() - 1)
        {
            String subStr = description.substr(cur, i + 1);
            for(int j = 0;  j < subStr.size(); j++)
            {
                subStr[j] = tolower(subStr[j]);
            }
            if(subStr != "an" && subStr != "a" && subStr != "the")
            {
                keywords.insert(subStr);
            }
            cur = i + 1;
        }
    }
}

void NewsModel::buildTitles()
{
    int cur = 0;
    for(int i = 0; i < title.size(); i++)
    {
        if(isspace(title[i]) || isSymbol(title[i]))
        {
            cur++;
        }
        if(cur > i)
        {
            continue;
        }
        if(isspace(title[i]) || isSymbol(title[i]))
        {
            String subStr = title.substr(cur, i);
            for(int j = 0; j < subStr.size(); j++)
            {
                subStr[j] = tolower(subStr[j]);
            }
            if(subStr != "an" && subStr != "a" && subStr != "the")
            {
                titles.insert(subStr);
            }
            cur = i + 1;
        }
        if(i == title.size() - 1)
        {
            String subStr = title.substr(cur, i + 1);
            for(int j = 0;  j < subStr.size(); j++)
            {
                subStr[j] = tolower(subStr[j]);
            }
            if(subStr != "an" && subStr != "a" && subStr != "the")
            {
                titles.insert(subStr);
            }
            cur = i + 1;
        }
    }
}
