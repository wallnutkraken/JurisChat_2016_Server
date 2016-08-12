//
// Created by wallnut on 5/20/16.
//

#ifndef JURISCHAT_2016_SERVER_PACKETTOOLONGEXCEPTION_H
#define JURISCHAT_2016_SERVER_PACKETTOOLONGEXCEPTION_H

class PacketTooLongException
        : public std::exception {

public:

    // Construct with given error message:
    PacketTooLongException(const char * error = "The packet's contents are too big for the current protocol version")
    {
        errorMessage = error;
    }

    // Provided for compatibility with std::exception.
    const char * what() const noexcept
    {
        return errorMessage.c_str();
    }

private:

    std::string errorMessage;
};

#endif //JURISCHAT_2016_SERVER_PACKETTOOLONGEXCEPTION_H
