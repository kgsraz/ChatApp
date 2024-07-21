#pragma once
#include "User.h"
#include "ChatRoom.h"
#include "CustomExceptions.h"
using namespace std;

class ChatApp {
private:
    vector<User> registeredUsers;
    ChatRoom chatRoom;
public:
    void registerUser(const User& user);
    void loginUser(const string& login, const string& password);
    void processMessages();
};