#include "User.h"
#include <string>
#include <iostream>
using namespace std;

User::User(string login, string password, string name)
    : login(login), password(password), name(name) {}

string User::getLogin() {
    return login;
}

string User::getPassword() {
    return password;
}

string User::getName() {
    return name;
}