//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_SERVER_H
#define JURISCHAT_2016_SERVER_SERVER_H

#include <string>

class Server
{
    User _users[];
    std::string generateToken();
    void receivePacket();
    void sendPacket(User& user);
public:
    Server();
    User FindUser(std::string username);
    std::string LoginUser(std::string username, std::string password, std::string host);
    /* The above method should return the session token */
};


#endif //JURISCHAT_2016_SERVER_SERVER_H
