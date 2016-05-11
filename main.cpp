#include <iostream>
#include <boost/asio.hpp>
#include "Server.h"
#include "Exceptions/NotImplementedException.h"

using namespace std;
using namespace boost;

int main()
{
    Server* server = new Server();
    server->LoginUser("Emile", "badpassword", "none");
    delete(server);
    return 0;
}


