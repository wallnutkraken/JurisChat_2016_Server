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
    void User::Disconnect() {

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
        /* Not implemented */
    }
    Message* User::getUnreadMessages() { /* returns a pointer to the array _unreadMessages */
        return _unreadMessages;
    }
};