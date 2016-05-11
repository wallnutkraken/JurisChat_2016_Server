//
// Created by wallnut on 5/11/16.
//

#include "Server.h"

class Server
{
    void User::receivePacket() {
        /* Not implemented -- also currently doesn't even have any arguments! */
        throw NotImplementedException();
    }
    void User::sendPacket(User& user) {
        /* Not implemented */
        throw NotImplementedException();
    }
public:
    Server::Server() {
        /* Noargs constructor */
    }
    User User::FindUser(std::string username) {
        /* Not implemented */
        throw NotImplementedException();
    }
    std::string User::LoginUser(std::string username, std::string password, std::string host) {
        /* Not implemented */
        throw NotImplementedException();
    }
};
