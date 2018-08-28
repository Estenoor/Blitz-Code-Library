#include "Networking.hpp"

using namespace std;

void Blitz::Networking::Open()
{
    socketAddress.sin_family = AF_INET;
    socketAddress.sin_port = htons(port);
    socketAddress.sin_addr.s_addr = htonl(INADDR_ANY);

    sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

    bind(sock, (struct sockaddr *)&socketAddress, sizeof(socketAddress));

}

void Blitz::Networking::UpdateData()
{
    recv(sock, buffer, 256, 0);

    string data(buffer);

    *output = data;
}

void Blitz::Networking::Close()
{
    close(sock);
}