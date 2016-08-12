#include <iostream>
#include <boost/asio.hpp>
#include "Server.h"
#include "Packet.h"

using namespace std;
//using namespace boost;

void UnitTestLoginSecurity();

int main() {
    cout << "hello this is different" << endl;
    try {
        OPCodeLengths hellothisismything = LOGONH;
        const char* mycstring = "Hello!!";
        cout << mycstring << endl;
        string mystring = mycstring;
        cout << "gfgfgf" <<endl;
        Packet myPacket(hellothisismything, mystring);
        byte* packet = myPacket.Generate();
        Packet gotPacket = parsePacket(packet);
        cout << gotPacket.getContent() << endl;
    }
    catch (std::exception exception1) {
        cout << exception1.what() << endl;
    }
    /*UnitTestLoginSecurity();
    asio::io_service service;
    service.run();
    Server *server = new Server(service, 1632);

    cout << server->LoginUser("Emile", "badpassword", "none") << endl;
    delete (server);*/
    return 0;
}

void UnitTestLoginSecurity() {
}