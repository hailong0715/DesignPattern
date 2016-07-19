#include"Observer.h"

int main()
{
	ConcrtrObserver1 *pObser1 = new ConcrtrObserver1();
	ConcrtrObserver2 *pObser2 = new ConcrtrObserver2();
	ConcrtrObserver1 *pObser3 = new ConcrtrObserver1();
	ConcrtrObserver2 *pObser4 = new ConcrtrObserver2();
	ConcreteSubject *pSubject = new ConcreteSubject();
	pSubject->Attach(pObser1);
	pSubject->Attach(pObser2);
	pSubject->Attach(pObser3);
	pSubject->Attach(pObser4);
	
	pSubject->SetState(NET_STAT_LISTENING);
	pSubject->Notify();

	pSubject->Detach(pObser3);
	pSubject->SetState(NET_STAT_CONNCTED);
	pSubject->Notify();

	delete pObser1;
	delete pObser2;
	delete pObser3;
	delete pObser4;
	delete pSubject;
	return 0;
}