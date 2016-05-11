//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_USER_H
#define JURISCHAT_2016_SERVER_USER_H

#include <string>
#include "Constants.h"
#include "Message.h"

class Server; /* Forward looking Server class, to break circular dependencies */

class User
{
    std::unique_ptr<Server> server;

    std::string _username;
    std::string _saltedPasswordHash;
    std::string _salt;

    std::string _sessionToken;
    Message _unreadMessages[MAX_UNREAD_MESSAGES_STORED];

public:
    User(Server& serverReference);
    ~User();
    void Disconnect();
    bool AttemptLogin(std::string username, std::string passwordAttempt);

    std::string getSessionToken();
    void setSessionToken(std::string newToken);
    void addUnreadMessage(Message message);
    Message* getUnreadMessages(); /* returns a pointer to the array _unreadMessages */
};


#endif //JURISCHAT_2016_SERVER_USER_H
