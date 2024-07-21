#include <iostream>
#include "User.h"
#include "ChatRoom.h"
#include "ChatApp1.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    try {
        User user1("@aaaa", "1234", "Alice");
        User user2("@bbbb", "5678", "Peter");

        ChatRoom chatRoom;
        chatRoom.addUser(user1);
        chatRoom.addUser(User("@cccc", "letmein", "Charlie")); 

        chatRoom.sendMessage(user2, "Привет, Alice!");

    }
    catch (const ChatException& ex) {
        cerr << "Произошла ошибка в чате: " << ex.what() << endl;
    }
    catch (const std::exception& ex) {
        cerr << "Произошла неизвестная ошибка: " << ex.what() << endl;
    }

    return 0;
}