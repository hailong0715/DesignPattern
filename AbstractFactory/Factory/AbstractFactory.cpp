#include "AbstractFactory.h"
ProductA *ConcreteFactoryA::CreateProductA()
{
	return new ProductA1();
}

ProductB * ConcreteFactoryA::CreateProductB()
{
	return new ProductB1();
}


ProductA* ConcreteFactoryB::CreateProductA()
{
	return new ProductA2();
}

ProductB* ConcreteFactoryB::CreateProductB()
{
	return new ProductB2();
}