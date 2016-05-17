#include <iostream>
#include <boost/asio.hpp>
#include "Server.h"
#include "Exceptions/NotImplementedException.h"

using namespace std;
using namespace boost;

int main()
{
    asio::io_service service;
    Server* server = new Server(service);
    server->LoginUser("Emile", "badpassword", "none");
    delete(server);
    return 0;
}


