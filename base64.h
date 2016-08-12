//
// Created by wallnut on 5/19/16.
//

#ifndef JURISCHAT_2016_SERVER_BASE64_H
#define JURISCHAT_2016_SERVER_BASE64_H


#include <string>

std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);


#endif //JURISCHAT_2016_SERVER_BASE64_H
