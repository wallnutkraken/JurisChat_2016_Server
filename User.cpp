//
// Created by wallnut on 5/11/16.
//

#include "User.h"

using namespace std;

class User
{

public:
    User::User(Server& serverReference) {
        server = serverReference;
    }
    User::~User() {
        throw NotImplementedException();
    }

    void User::Disconnect() {
        throw NotImplementedException();
    }
    bool User::AttemptLogin(std::string username, std::string passwordAttempt) {
        return false;
    }

    std::string User::getSessionToken() {
        return _sessionToken;
    }

    void User::setSessionToken(std::string newToken) {
        _sessionToken = newToken;
    }
    void User::addUnreadMessage(Message message) {
        throw NotImplementedException();
    }
    Message* User::getUnreadMessages() { /* returns a pointer to the array _unreadMessages */
        return _unreadMessages;
    }

};