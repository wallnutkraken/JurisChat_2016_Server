//
// Created by wallnut on 5/20/16.
//

#ifndef JURISCHAT_2016_SERVER_PACKET_H
#define JURISCHAT_2016_SERVER_PACKET_H

#include "OPCodes.h"
#include <iostream>
#include "Exceptions/PacketTooLongException.h"

class Packet {

    byte _opcode;
    unsigned short _length;
    bool _isFixedLength;
    std::string _content;

public:
    Packet(OPCodeLengths info, std::string content);
    Packet();
    ~Packet();
    unsigned short getLength();
    byte* Generate();
    std::string getContent();
    byte getOPCode();
};

Packet parsePacket(byte recievedPacket[]); /* A static function */

#endif //JURISCHAT_2016_SERVER_PACKET_H
