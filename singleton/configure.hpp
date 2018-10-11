#ifndef CONFIGURE_HPP
#define CONFIGURE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream> 

using namespace std;


class Configure
{
         private :
               string HostIpaddr;
               string HostName;

               unsigned int Port;
              
               string tempConfigData[2];
               string line;
               static Configure *pconfig;

               Configure();
               void setIPaddress(string ip);
               void setHostName(string hostname);
               void setPort(unsigned int port);
               

        public :
               static Configure* initConfig();
               string setIPaddress();
               string setHostName();
               int setPort();

};


#endif
