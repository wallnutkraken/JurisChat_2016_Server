//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_OPCODES_H
#define JURISCHAT_2016_SERVER_OPCODES_H


typedef unsigned char byte;
const byte LENGTH_BYTE_COUNT = 2;
/* Amount of bytes after the OPCode to delegate to the length */
const byte OPCODE_LENGTH = 1;
/* Might seem weird, but this defines how long an opcode can be, in bytes */

enum OPCode {
    Idle,
    Logon,
    GetMessages,
    ListUsers,
    SendMessage,
    Disconnect
};

struct OPCodeLengths {
    OPCode opcode;
    bool isFixedLength;
    unsigned short length;
};

OPCodeLengths createOPCodeLengths(OPCode op, bool isFixedLen, unsigned short len);

/* Only for non-fixed length ones */
OPCodeLengths createOPCodeLengths(OPCode op);


const OPCodeLengths IDLE = {Idle, true, 0};//createOPCodeLengths(Idle, true, 0);
const OPCodeLengths LOGONH = {Logon, false, 0};//createOPCodeLengths(Logon);

const OPCodeLengths ALL_OPCODES[] = {IDLE, LOGONH};

#endif //JURISCHAT_2016_SERVER_OPCODES_H
