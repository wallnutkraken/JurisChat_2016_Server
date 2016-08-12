//
// Created by wallnut on 5/20/16.
//

#include "Packet.h"

Packet::Packet(OPCodeLengths info, std::string content) {
    int blah = info.opcode;
    _opcode = blah;
    _isFixedLength = info.isFixedLength;
    if (!_isFixedLength) {
        _length = content.length() & 0xFFFF; /* Makes sure the length is a maximum of 0xFFFF */
        /* which would be the highest length the protocol supports */
    }
    else {
        _length = info.length;
    }
}

Packet::Packet() {

}

Packet::~Packet() {

}

byte* Packet::Generate() {
    const unsigned short size = (_length + OPCODE_LENGTH + LENGTH_BYTE_COUNT) & 0xFFFF; /* In case of int overflow */
    byte* packet = new byte[size];

    packet[0] = _opcode;
    packet[1] = _length / 256;
    packet[2] = _length % 256;

    for(int i = 3; i < size; i++) {
        packet[i] = reinterpret_cast<unsigned char&>(_content[i - 3]); /* Since you start adding content */
        /* from the fourth byte in the array this makes sure we don't also skip over the first three characters */
        /* from the content of the byte */
    }

    return packet;
}

unsigned short Packet::getLength() {
    return _length;
}

std::string Packet::getContent() {
    return _content;
}

byte Packet::getOPCode() {
    return _opcode;
}


Packet parsePacket(byte recievedPacket[]) {
    OPCodeLengths opCodeInfo = ALL_OPCODES[recievedPacket[0]]; /* Gets default info for OPCode */

    unsigned short length = (256 * recievedPacket[1] + recievedPacket[2]) & 0xFFFF;
    std::string content = "";
    for(int i = 3; i < length; i++) {
        content += reinterpret_cast<char&>(recievedPacket[i]);
    }

    return Packet(opCodeInfo, content);
}

