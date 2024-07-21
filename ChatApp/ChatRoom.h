#pragma once
#include <string>
#include <vector>
#include "User.h"
#include "CustomExceptions.h"
using namespace std;

class ChatRoom {
private:
    vector<User> users;
public:
    void addUser(const User& user);
    void sendMessage(const User& sender, const string& message);
    void broadcastMessage(const User& sender, const string& message);
};