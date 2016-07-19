#ifndef Observer_h_
#define Observer_h_

#include <iostream>
#include <list>
class Observer;

const int NET_STAT_UNCONNET = 0;
const int NET_STAT_LISTENING = 1;
const int NET_STAT_CONNCTED = 2;

class Subject
{
public:
	virtual ~Subject(){};
	virtual bool Attach(Observer*)=0;
	virtual bool Detach(Observer*)=0;
	virtual void Notify() = 0;
	void SetState(int state){ this->m_state = state; }
	int GetState(){ return m_state; }
protected:
	int m_state;

};


class ConcreteSubject :public Subject
{
public:
	ConcreteSubject();
	virtual ~ConcreteSubject(){};
	void Notify();
	virtual bool Attach(Observer*);
	virtual bool Detach(Observer*);
private:
	std::list<Observer*> m_observer_List;
};

class Observer
{
public:
	virtual ~Observer(){};
	virtual void Update(Subject*)=0;
	void ShowState(){ std::cout << "state: " << m_state << std::endl; }
protected:
	int m_state;
};

class ConcrtrObserver1:public Observer
{
public:
	virtual void Update(Subject*);
	ConcrtrObserver1();
	virtual ~ConcrtrObserver1(){};
};

class ConcrtrObserver2 :public Observer
{
public:
	virtual void Update(Subject*);
	ConcrtrObserver2();
	virtual ~ConcrtrObserver2(){};
};
#endif
