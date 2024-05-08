#include "user.h"
#include "signup.h"
#include "login.h"
#include "adminx.h"

User::User(){}
User::User(
    string username,
    string password,
    string region,
    string email)
{
    this->username = username;
    this->password = password;
    this->region = region;
    this->email = email;
}
User::User(string firstname,string lastname,string username,string password,string email){
    this->firstname=firstname;
    this->lastname=lastname;
    this->username=username;
    this->password=password;
    this->email=email;
}
vector<NewsModel> User::Search(SearchBasedOn searchBasedOn, string inp) {
    if(searchBasedOn == SearchBasedOn::Keyword)
    {
        return _searchByKeywords(inp);
    }
    else if(searchBasedOn == SearchBasedOn::titles)
    {
        return _searchByTitles(inp);
    }
    else if(searchBasedOn == SearchBasedOn::date)
    {
        return _searchByDate(inp);
    }
    else
    {
        qDebug() << "Undefined Type\n";
        return {};
    }
}

vector<NewsModel> User::_searchByKeywords(string keyword)
{
    vector<NewsModel> ans;
    for(auto &newModel : Adminx::news)
    {
        if(newModel.keywords.count(keyword))
        {
            ans.push_back(newModel);
            continue;
        }
    }
    return ans;
}
vector<NewsModel> User::_searchByTitles(string title)
{
    vector<NewsModel> ans;
    for(auto &newModel : Adminx::news)
    {
        if(newModel.titles.count(title))
        {
            ans.push_back(newModel);
            continue;
        }
    }
    return ans;
}
vector<NewsModel> User::_searchByDate(string date)
{
    vector<NewsModel> ans;
    for(auto &newModel : Adminx::news)
    {
        if(newModel.getDate() == date)
        {
            ans.push_back(newModel);
            continue;
        }
    }
    return ans;
}
void User::ShowNewBasedOnCategory()
{

}
void User::RateNew(NewsModel news, double rate) {
    int id = Login::count;
    if(news.rates.count(id))
    {
        news.avgRate += (rate - news.avgRate)*news.rates.size();
        news.rates[id] = rate;
    }
    else
    {
        news.avgRate = ((news.avgRate * (news.rates.size())) + rate) / (news.rates.size() + 1);
        news.rates[id] = rate;
    }
}
void User::Bookmark() {

}
void User::ReadData() {}
void User::setUsername(string username)
{
    this->username = username;
}
void User::setPassword(string password)
{
    this->password = password;
}
void User::setRegion(string region)
{
    this->region = region;
}
void User::setEmail(string email)
{
    this->email = email;
}
string User::getFirstName(){return firstname;}
string User::getLastName(){return lastname;}
string User::getUsername() { return username; }
string User::getPassword() { return password; }
string User::getRegion() { return region; }
string User::getEmail() { return email; }
void User::addUser(User user){
    Adminx::users.push_back(user);
}
