//
// Created by wallnut on 5/17/16.
//

#ifndef JURISCHAT_2016_SERVER_LOGINSECURITY_H
#define JURISCHAT_2016_SERVER_LOGINSECURITY_H

#include <iostream>
#include <random>
#include "Exceptions/NotImplementedException.h"
#include <ctime>
#include <chrono>
#include <openssl/sha.h>
#include <openssl/rand.h>
#include <cstring>

class LoginSecurity {
    int getRandomNumber();

public:
    LoginSecurity();

    std::string SaltedHash(std::string salt, std::string password);

    std::string Salt();
};


#endif //JURISCHAT_2016_SERVER_LOGINSECURITY_H
