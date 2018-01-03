#include "Configure.hpp"

Configure::Configure()
{
    std::ifstream ConfigFile("test.conf");
    while(getline(ConfigFile,line))
    {
       /* Ignore if a line contains # (hash) which is a comment */
       if(line.substr(0,1) != "#")
       {
            stringstream streamInput(line);int i = 0;
            while(streamInput.good())
            {
                streamInput >> tempConfigData[i];
                if(tempConfigData[0].compare("ipaddress"))
                    setIPaddress(tempConfigData[1]);
                else if(tempConfigData[0].compare("hostname"))
                    setHostName(tempConfigData[1]);
                else if(tempConfigData[0].compare("port"))
                    setPort(atoi(tempConfigData[1].c_str()));
                
                ++i;
            }
      }
   }
}

Configure* Configure::pconfig = NULL;

void Configure::setIPaddress(string ip)
{
      HostIpaddr = ip;
}
void configProxy::setHostName(string hostName)
{
      HostName = hostName;
}
void configProxy::setPort(unsigned int port)
{
      Port = port;
}

Configure* Configure::initConfig()
{
     if(pconfig == NULL)
            pconfig = new Configure();
     return pconfig;
}

