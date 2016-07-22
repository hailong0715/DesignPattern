class TCPState;
class TCPConn
{
public:
	TCPConn(TCPState* state){ this->m_state = state; }
	void SetTCPState(TCPState* state);
	void Request();
private:
	TCPState* m_state;
};

class TCPState
{
public:
	virtual void Handle(TCPConn*) = 0;
	virtual ~TCPState(){};
};

class TCPClose : public TCPState
{
public:
	virtual~TCPClose(){};
	virtual void Handle(TCPConn*);
};


class TCPListen :public TCPState
{
public:
	virtual ~TCPListen(){};
	virtual void Handle(TCPConn*);
};

class TCPAccepted :public TCPState
{
public:
	virtual ~TCPAccepted(){};
	virtual void Handle(TCPConn*);
};

class TCPConnected :public TCPState
{
public:
	virtual ~TCPConnected(){};
	virtual void Handle(TCPConn*);
};
