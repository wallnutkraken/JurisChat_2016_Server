//
// Created by wallnut on 5/12/16.
//

#ifndef JURISCHAT_2016_SERVER_USERNOTFOUNDEXCEPTION_H
#define JURISCHAT_2016_SERVER_USERNOTFOUNDEXCEPTION_H
class UserNotFoundException
        : public std::exception {

public:

    // Construct with given error message:
    UserNotFoundException(const char * error = "No such user was found")
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
#endif //JURISCHAT_2016_SERVER_USERNOTFOUNDEXCEPTION_H
