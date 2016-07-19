#include "Observer.h"
#include <algorithm>


ConcreteSubject::ConcreteSubject()
{
	m_state = NET_STAT_UNCONNET;
}

bool ConcreteSubject::Attach(Observer* pObser)
{
	m_observer_List.push_back(pObser);
	std::cout << "Insert an Observer\n";
	return true;
}

bool ConcreteSubject::Detach(Observer* pObser)
{
	std::list<Observer*>::iterator it;
	for (it = m_observer_List.begin(); it != m_observer_List.end(); it++)
	{
		if (*it == pObser)
		{
			m_observer_List.erase(it);
			std::cout << "Erase an observer\n";
			break;
		}
	}
	return true;
}

void ConcreteSubject::Notify()
{
	std::list<Observer*>::iterator it;
	for (it = m_observer_List.begin(); it != m_observer_List.end(); it++)
	{
	
		(*it)->Update(this);
	}
}

ConcrtrObserver1::ConcrtrObserver1()
{
	m_state = NET_STAT_UNCONNET;
}

void ConcrtrObserver1::Update(Subject* pSubject)
{
	this->m_state = pSubject->GetState();
	ShowState();
}

ConcrtrObserver2::ConcrtrObserver2()
{
	m_state = NET_STAT_UNCONNET;
}

void ConcrtrObserver2::Update(Subject* pSubject)
{
	this->m_state = pSubject->GetState();
	ShowState();
}