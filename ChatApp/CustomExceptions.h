#pragma once
#include <stdexcept>
#include <string>
using namespace std;

class ChatException : public exception {
private:
    string message;
public:
    explicit ChatException(const string& msg) : message(msg) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};