#include "builder.h"

void ConcreteBuilder::buildPartA()
{
	product->SetPartA("PartA");
}
void ConcreteBuilder::buildPartB()
{
	product->SetPartB("PartB");
}

void ConcreteBuilder::buildPartC()
{
	product->SetPartC("PartC");
}

Product* ConcreteBuilder::GetResult()
{
	return this->product;
}