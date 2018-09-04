#pragma once

#include <WPILib.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <iostream>

using namespace std;

namespace Blitz
{
    class Networking
    {
        public:
            Networking(unsigned short port, std::string *output)
            {
                this->port = port;
                this->output = output;
            }

            void Open();
            void UpdateData();
            void Close();


            
        private:

            std::string *output;
            unsigned short port;
            int sock;
            struct sockaddr_in socketAddress;
            char buffer[256];
            
    };  
}