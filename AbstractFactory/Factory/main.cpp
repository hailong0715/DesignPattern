#include "AbstractFactory.h"

int main()
{
	ConcreteFactoryA *pFacA = new ConcreteFactoryA();
	pFacA->CreateProductA()->show();
	pFacA->CreateProductB()->show();

	ConcreteFactoryB* pFcB = new ConcreteFactoryB();
	pFcB->CreateProductA()->show();
	pFcB->CreateProductB()->show();


	return 0;
}

