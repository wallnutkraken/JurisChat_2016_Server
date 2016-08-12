//
// Created by wallnut on 5/11/16.
//

#ifndef JURISCHAT_2016_SERVER_NOTIMPLEMENTEDEXCEPTION_H
#define JURISCHAT_2016_SERVER_NOTIMPLEMENTEDEXCEPTION_H

class NotImplementedException
        : public std::exception {

public:

    // Construct with given error message:
    NotImplementedException(const char * error = "Functionality not yet implemented!")
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

#endif //JURISCHAT_2016_SERVER_NOTIMPLEMENTEDEXCEPTION_H
