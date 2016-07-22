#include "State.h"
#include <iostream>
void TCPListen::Handle(TCPConn* tcpConn)
{
	//可以调用socket bind, listen等函数
	std::cout << "TCP STAT Listening\n";
	tcpConn->SetTCPState(new TCPAccepted());
}

void TCPAccepted::Handle(TCPConn* tcpConn)
{
	//可以调用accepted 等待客户端连接
	std::cout << "TCP STAT Accepted\n";
	tcpConn->SetTCPState(new TCPConnected());
}

void TCPConnected::Handle(TCPConn* tcpConn)
{
	//可以在这里写读写函数 send recv
	std::cout << "Tcp STAT connected\n";
	tcpConn->SetTCPState(new TCPClose());
}

void TCPClose::Handle(TCPConn* tcpConn)
{
	//可以再这里调用close 关闭socket
	std::cout << "TCP STAT Close\n";
	tcpConn->SetTCPState(new TCPListen());
}

void TCPConn::SetTCPState(TCPState* state)
{
	if (NULL != m_state)
		delete m_state;
	this->m_state = state;
}

void TCPConn::Request()
{
	m_state->Handle(this);
}
