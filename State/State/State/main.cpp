#include "State.h"

int main()
{
	TCPConn* tcpconn = new TCPConn(new TCPListen());
	tcpconn->Request();
	tcpconn->Request();
	tcpconn->Request();
	tcpconn->Request();
	delete tcpconn;
}