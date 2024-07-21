#pragma once
#include <string>
using namespace std;

class User {
private:
    string login;
    string password;
    string name;
public:
    User(string login, string password, string name);
    string getLogin();
    string getPassword();
    string getName();
};