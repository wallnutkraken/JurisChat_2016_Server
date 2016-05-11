//
// Created by wallnut on 5/11/16.
//

#include "Server.h"
#include "Exceptions/UserNotFoundException.h"

void Server::ReceivePacket() {
    /* Not implemented -- also currently doesn't even have any arguments! */
    throw NotImplementedException();
}

void Server::SendPacket(User &user) {
    /* Not implemented */
    throw NotImplementedException();
}

std::string Server::GenerateToken() {
    /* Generate random token. Probably base64. */
    return "";
}

Server::Server() {
    /* Noargs constructor */
    _userCount = 0;
}

Server::~Server() {
    /* Destructor */
}

int Server::addUser(User &userToAdd) {
    if (_userCount + 1 < MAX_ALLOWED_USERS) {
        _users[_userCount] = User(this);
        /* TODO: finish this method */
        throw NotImplementedException();
    }
}

User Server::FindUser(std::string username) {
    /* Not implemented */
    throw NotImplementedException();
}

std::string Server::LoginUser(std::string username, std::string password, std::string host) {
    /* Not implemented */
    try {
        FindUser(username);
    }
    catch (UserNotFoundException exception) {

    }
}

