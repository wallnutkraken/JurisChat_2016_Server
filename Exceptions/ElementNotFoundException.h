//
// Created by wallnut on 5/20/16.
//

#ifndef JURISCHAT_2016_SERVER_ELEMENTNOTFOUNDEXCEPTION_H
#define JURISCHAT_2016_SERVER_ELEMENTNOTFOUNDEXCEPTION_H

class ElementNotFoundException
        : public std::exception {

public:

    // Construct with given error message:
    ElementNotFoundException(const char * error = "The element was not found")
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
#endif //JURISCHAT_2016_SERVER_ELEMENTNOTFOUNDEXCEPTION_H
