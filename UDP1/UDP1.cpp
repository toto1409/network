// UDP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()//udp sending client
{
    s = socket(UDP);
    s.bind(any_port);
    s.sendto("55.66.77.88:5555", "hello");
    s.close();
}
int main()//dps receving client
{
    s = socket(udp);
    s.bind(5555);//need to specify port to receive packet.
    r = s.recvfrom();//receive packet, if not receive, does not return
    print(r.srcAddPort, r.data);
    s.close();
}

