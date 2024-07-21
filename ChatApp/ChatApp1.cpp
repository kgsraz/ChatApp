#include "ChatApp1.h"
#include <iostream>
using namespace std;

void ChatApp::registerUser(const User& user) {
    // Логика регистрации нового пользователя определена здесь
}

void ChatApp::loginUser(const std::string& login, const std::string& password) {
    // Логика входа пользователя определена здесь
}

void ChatApp::processMessages() {
    try {
        // Логика обработки входящих и исходящих сообщений
    }
    catch (const ChatException& e) {
        cout << "Произошла ошибка: " << e.what() << endl;
    }
}