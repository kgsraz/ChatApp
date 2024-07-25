#pragma once
#include <string>
class User {
private:
    std::string login;
    std::string password;

public:
    User();
    // Конструктор по умолчанию
    User() : login(""), password("") {}

    // Конструктор с параметрами
    User(const std::string& login, const std::string& password)
        : login(login), password(password) {}

    std::string getLogin() const {
        return login;
    }

    std::string getPassword() const {
        return password;
    }
 
};
