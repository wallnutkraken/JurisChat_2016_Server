//
// Created by wallnut on 5/17/16.
//

#include "LoginSecurity.h"

int LoginSecurity::getRandomNumber() {
    throw NotImplementedException();
}


std::string LoginSecurity::Salt() {
    /* Generates salt from a varitety of unique parts of the system: */
    /* Random number generator */
    /* Current unix time */


    /* This bit gets the UNIX timestamp. */
    std::string time = std::to_string(std::chrono::system_clock::now().time_since_epoch().count());

    /* And here's the random number */
    std::string random = std::to_string(getRandomNumber());

    return random + time;
}

LoginSecurity::LoginSecurity() {
}

std::string LoginSecurity::SaltedHash(std::string salt, std::string password) {
    const int length = salt.length() + password.length(); /* get the length of the combined string */
    unsigned char saltedPassword[length];
    strcpy((char*)saltedPassword, (salt + password).c_str()); /* and copy it into a container that  */
    /* SHA1() can use */

    unsigned char hash[SHA_DIGEST_LENGTH];

    SHA1(saltedPassword, length, hash);

    std::string hashString(hash, hash + sizeof(hash) / sizeof(hash[0]));

    return hashString;
}