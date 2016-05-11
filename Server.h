//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_SERVER_H
#define JURISCHAT_2016_SERVER_SERVER_H

#include <string>
#include "Constants.h"
#include "User.h"


class Server
{
    User _users[MAX_ALLOWED_USERS];
    std::string GenerateToken();
    void ReceivePacket();
    void SendPacket(User& user);
    unsigned int _userCount;

public:
    Server();
    ~Server();
    User FindUser(std::string username);
    std::string LoginUser(std::string username, std::string password, std::string host);
    /* The above method should return the session token */
    int addUser(User& userToAdd);
};


#endif //JURISCHAT_2016_SERVER_SERVER_H
