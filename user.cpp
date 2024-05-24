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

vector<NewsModel> User::_searchByKeywords(string input)
{
    unordered_set<string> keywords;
    buildKeys(input, keywords); // build keyword for input to search with
    vector<NewsModel> ans;
    auto &news = Adminx::news;
    map<int, bool> checked;
    for(int i = 0; i < news.size(); i++) // iterates for all news
    {
        bool loop2 = false;
        for(auto &keyword : news[i].keywords)
        {
            qDebug() << keyword << '\n';
        }
        qDebug() << "------------------------------------------------\n";
        for(auto &keyword : keywords) // iterates for all keywords
        {
            if(news[i].keywords.find(keyword) != news[i].keywords.end()) // search if keyword is found in newModel or not
            {
                if(!checked.count(i))
                {
                    ans.push_back(news[i]);
                    checked[i] = true; // break the second loop to prevent the repeat of newModel in answer
                }
            }
        }
    }

    return ans;
}

vector<NewsModel> User::_searchByTitles(string title)
{
    vector<NewsModel> ans;

    for(auto &newModel : Adminx::news)
    {
        if(title == newModel.getTitle())
        {
            ans.push_back(newModel);
            break;
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
