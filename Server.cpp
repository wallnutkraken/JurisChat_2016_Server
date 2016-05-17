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

void Server::initServer(boost::asio::io_service &ioService, unsigned short port) {
    _userCount = 0;
    _port = port;
    _listeningSocket = new boost::asio::ip::udp::socket(ioService);
}

Server::Server(boost::asio::io_service &ioService) {
    initServer(ioService, 1632);
}

Server::Server(boost::asio::io_service &ioService, unsigned short port) {
    initServer(ioService, port);
}

Server::~Server() {
    /* Destructor */
    _listeningSocket->close();
}

int Server::addUser(User &userToAdd) {
    if (_userCount + 1 < MAX_ALLOWED_USERS) {
        _users[_userCount] = User(this);
        User* newUser = &_users[_userCount];
        newUser->setUsername(userToAdd.getUsername());
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

