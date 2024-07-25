#include "User.h"
#include <string>
#include <iostream>
User::User() : login(""), password("") {}

// Конструктор с параметрами
User::User(const std::string& login, const std::string& password)
    : login(login), password(password) {}

// Метод для получения логина
std::string User::getLogin() const {
    return login;
}

// Метод для получения пароля
std::string User::getPassword() const {
    return password;
}
