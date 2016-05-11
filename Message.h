//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_MESSAGE_H
#define JURISCHAT_2016_SERVER_MESSAGE_H

#include "User.h"
#include "NotImplementedException.h"

struct Message {
    std::string senderUsername;
    std::string receiverUsername;
    std::string text;
    time_t timeStamp;
};

Message ParseMessage(std::string request) {
    throw NotImplementedException();
}

#endif //JURISCHAT_2016_SERVER_MESSAGE_H
