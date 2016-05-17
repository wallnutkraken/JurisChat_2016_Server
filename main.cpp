#include <iostream>
#include <boost/asio.hpp>
#include "Server.h"
#include "Exceptions/NotImplementedException.h"
#include "LoginSecurity.h"

using namespace std;
using namespace boost;

int main()
{
    LoginSecurity securityProvider;
    string mystring = "HelloEmile";
    cout << "For string (" + mystring + ")" << endl;
    string salt = securityProvider.Salt();
    cout << "Salt is " + salt << endl;
    cout << "Salted hash: " + securityProvider.SaltedHash(salt, mystring) << endl;
    asio::io_service service;
    Server* server = new Server(service);
    server->LoginUser("Emile", "badpassword", "none");
    delete(server);
    return 0;
}


