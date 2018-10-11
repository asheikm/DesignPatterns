#include "Configure.hpp"

int main(int argc, char *argv[])
{
   Configure *pconfigure = Configure::initConfig();
   cout << "Ipaddress = " << pconfigure->getIPaddress() << endl;
   cout << "HostName  = " << pconfigure->getHostName() << endl;
   cout << "Port      = " << pconfigure->getPort() << endl;
   return 0
}
