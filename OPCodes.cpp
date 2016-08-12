//
// Created by wallnut on 5/21/16.
//

#include "OPCodes.h"

OPCodeLengths createOPCodeLengths(OPCode op, bool isFixedLen, unsigned short len) {
    OPCodeLengths newOPCode;
    newOPCode.opcode = op;
    newOPCode.isFixedLength = isFixedLen;
    newOPCode.length = len;
    return newOPCode;
}

OPCodeLengths createOPCodeLengths(OPCode op) {
    return createOPCodeLengths(op, false, 0);
}