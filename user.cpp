#include "user.h"
#include "signup.h"
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
void User::Search() {}
void User::ShowNewBasedOnCategory()
{

}
void User::RateNew() {}
void User::Bookmark() {}
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
