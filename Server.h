//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_SERVER_H
#define JURISCHAT_2016_SERVER_SERVER_H

#include <string>
#include "Constants.h"
#include "User.h"
#include <boost/asio.hpp>
#include <chrono>

class Server
{
    User _users[MAX_ALLOWED_USERS];
    std::string GenerateToken();
    void ReceivePacket();
    void SendPacket(User& user);
    unsigned int _userCount;

    unsigned short _port;
    boost::asio::ip::udp::socket* _listeningSocket = 0;

    void initServer(boost::asio::io_service &ioService, unsigned short port);

public:
    Server(boost::asio::io_service &ioService);
    Server(boost::asio::io_service &ioService, unsigned short port);
    ~Server();
    User FindUser(std::string username);
    std::string LoginUser(std::string username, std::string password, std::string host);
    /* The above method should return the session token */
    int addUser(User& userToAdd);
};


#endif //JURISCHAT_2016_SERVER_SERVER_H
