#include "ChatApp1.h"
#include <iostream>
using namespace std;

void ChatApp::registerUser(const User& user) {
    // Логика регистрации нового пользователя определена здесь
}

void ChatApp::loginUser(const std::string& login, const std::string& password) {
    // Логика входа пользователя определена здесь
}

void ChatApp::sendChatMessage(const User& sender, const std::string& message) {
    chatRoom.sendMessage(sender, message);
}

void ChatApp::startConsoleChat() {
    std::string userInput;
    User currentUser;

    std::cout << "Введите логин: ";
    std::cin >> userInput;
    std::string login = userInput;

    std::cout << "Введите пароль: ";
    std::cin >> userInput;
    std::string password = userInput;

    bool userFound = false;
    for (const User& user : registeredUsers) {
        if (user.getLogin() == login && user.getPassword() == password) {
            currentUser = user;
            userFound = true;
            break;
        }
    }

    if (!userFound) {
        throw std::runtime_error("Неверный логин или пароль. Попробуйте еще раз.");
    }

    // Логика обработки успешного входа пользователя
}
