#include <iostream>
#include "User.h"
#include "ChatRoom.h"
#include "ChatApp1.h"
#include <stdexcept>
#include <vector>
#include <map>
 

std::map<std::string, User> users; // Хранение пользователей по логину

// Функция для регистрации пользователя
void registerUser() {
    std::string login;
    std::string password;

    std::cout << "Введите логин: ";
    std::getline(std::cin, login);

    std::cout << "Введите пароль: ";
    std::getline(std::cin, password);

    if (users.find(login) != users.end()) {
        throw std::invalid_argument("Пользователь с таким логином уже существует.");
    }

    users[login] = User(login, password);
    std::cout << "Пользователь \"" << login << "\" зарегистрирован!" << std::endl;
}

// Функция для логина пользователя
User loginUser() {
    std::string login;
    std::string password;

    std::cout << "Введите логин для входа: ";
    std::getline(std::cin, login);

    std::cout << "Введите пароль: ";
    std::getline(std::cin, password);

    auto it = users.find(login);
    if (it != users.end() && it->second.getPassword() == password) {
        std::cout << "Пользователь \"" << login << "\" вошел в систему!" << std::endl;
        return it->second;
    }

    throw std::invalid_argument("Неверный логин или пароль.");
}

// Функция для отправки сообщения
void sendMessage(User& user) {
    std::string recipient;
    std::string content;

    std::cout << "Введите логин получателя: ";
    std::getline(std::cin, recipient);

    std::cout << "Введите сообщение: ";
    std::getline(std::cin, content);

    
}

// Основная функция программы
int main() {
    try {
        // Регистрация
        char choice;
        std::cout << "Вы хотите зарегистрироваться? (y/n): ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 'y') {
            registerUser();
        }

        // Логин
        User loggedInUser = loginUser();

        // Отправка сообщений
        while (true) {
            sendMessage(loggedInUser);
            std::cout << "Хотите отправить еще одно сообщение? (y/n): ";
            std::cin >> choice;
            std::cin.ignore();
            if (choice != 'y') {
                break;
            }
        }
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Произошла непредвиденная ошибка: " << e.what() << std::endl;
    }
    catch (...) {
        std::cerr << "Произошла неизвестная ошибка." << std::endl;
    }

    return 0;
}
