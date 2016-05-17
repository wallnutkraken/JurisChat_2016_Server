//
// Created by wallnut on 5/11/16.
//

#include "User.h"

using namespace std;

    User::User(Server* serverReference) {
        server = serverReference;
        _isRealUser = true;
    }

    User::~User() {

    }

    User::User() {
        _isRealUser = false; /* Empty user */
    }

    void User::setUsername(std::string name) {
        _username = name;
    }

    std::string User::getUsername() {
        return _username;
    }

    bool User::getIsRealUser() {
        return _isRealUser;
    }

    void User::Disconnect() {
        throw NotImplementedException();
    }

    bool User::AttemptLogin(std::string passwordAttempt) {
        if (_username.length() == 0) {
            return false;
        }
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
