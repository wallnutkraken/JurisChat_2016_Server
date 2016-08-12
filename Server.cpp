//
// Created by wallnut on 5/11/16.
//

#include "Server.h"
#include "base64.h"

void Server::ReceivePacket() {
    /* Not implemented -- also currently doesn't even have any arguments! */
    throw NotImplementedException();
}

void Server::SendPacket(User* user) {
    /* Not implemented */
    int index = 0;
    throw NotImplementedException();
}

std::string Server::GenerateToken() {
    /* Generate random token. base64. */
    std::string random = _security.Salt();
    return base64_encode(reinterpret_cast<const unsigned char*>(random.c_str()), random.length());
}


Server::Server(boost::asio::io_service &ioService, unsigned short port) {
    _userCount = 0;
    _port = port;
    _endpoint = new boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), port);
    _listeningSocket = new boost::asio::ip::udp::socket(ioService);
    runServer();
}

void Server::runServer() {
    throw NotImplementedException();
}

Server::~Server() {
    /* Destructor */
    _listeningSocket->close();
    delete(_endpoint);
    delete(_listeningSocket);
    for(int i = 0; i < _userCount; i++) {
        delete(_users[i]);
    }
    free(_users);
}

int Server::addUser(User* userToAdd) {
    if (_userCount + 1 < MAX_ALLOWED_USERS) {
        _users[_userCount] = new User(this);
        User* newUser = _users[_userCount];
        _userCount++;
        newUser->setUsername(userToAdd->getUsername());
        /* TODO: finish this method */
        throw NotImplementedException();
    }
}

User* Server::FindUser(std::string username) {
    /* Not implemented */
    for(int i = 0; i < _userCount; i++) {
        User* user = _users[i];
        if (user->getUsername() == username) {
            return user;
        }
    }
    throw std::exception();
}

std::string Server::LoginUser(std::string username, std::string password, std::string host) {
    /* Not implemented */
    User* thisUser;
    try {
        thisUser = FindUser(username);
    }
    catch (std::exception exception) {
        thisUser = new User(this);
        thisUser->setSessionToken(GenerateToken());
    }

    return thisUser->getSessionToken();
}

