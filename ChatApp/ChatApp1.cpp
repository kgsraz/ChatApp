#include "ChatApp1.h"
#include <iostream>
using namespace std;

void ChatApp::registerUser(const User& user) {
    // ������ ����������� ������ ������������ ���������� �����
}

void ChatApp::loginUser(const std::string& login, const std::string& password) {
    // ������ ����� ������������ ���������� �����
}

void ChatApp::processMessages() {
    try {
        // ������ ��������� �������� � ��������� ���������
    }
    catch (const ChatException& e) {
        cout << "��������� ������: " << e.what() << endl;
    }
}