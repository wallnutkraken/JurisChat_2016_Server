//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_MESSAGE_H
#define JURISCHAT_2016_SERVER_MESSAGE_H

#include "User.h"

struct Message {
    User user;
    std::string text;
    time_t timeStamp;
};

#endif //JURISCHAT_2016_SERVER_MESSAGE_H
