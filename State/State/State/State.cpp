#include "State.h"
#include <iostream>
void TCPListen::Handle(TCPConn* tcpConn)
{
	//���Ե���socket bind, listen�Ⱥ���
	std::cout << "TCP STAT Listening\n";
	tcpConn->SetTCPState(new TCPAccepted());
}

void TCPAccepted::Handle(TCPConn* tcpConn)
{
	//���Ե���accepted �ȴ��ͻ�������
	std::cout << "TCP STAT Accepted\n";
	tcpConn->SetTCPState(new TCPConnected());
}

void TCPConnected::Handle(TCPConn* tcpConn)
{
	//����������д��д���� send recv
	std::cout << "Tcp STAT connected\n";
	tcpConn->SetTCPState(new TCPClose());
}

void TCPClose::Handle(TCPConn* tcpConn)
{
	//�������������close �ر�socket
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
