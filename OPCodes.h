//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_OPCODES_H
#define JURISCHAT_2016_SERVER_OPCODES_H

typedef unsigned char byte;

const byte IDLE = 0;
const byte LOGON = 1;
const byte GET_MESSAGES = 2;
const byte LIST_USERS = 3;
const byte SEND_MESSAGE = 4;
const byte DISCONNECT = 5;

#endif //JURISCHAT_2016_SERVER_OPCODES_H
