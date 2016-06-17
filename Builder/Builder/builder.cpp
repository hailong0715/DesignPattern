#include "builder.h"

void ConcreteBuilderFat::buildPartA()
{
	product->SetPartA("胖子头");
}
void ConcreteBuilderFat::buildPartB()
{
	product->SetPartB("胖子身子");
}

void ConcreteBuilderFat::buildPartC()
{
	product->SetPartC("胖子脚");
}

Product* ConcreteBuilderFat::GetResult()
{
	return this->product;
}

ConcreteBuilderFat::ConcreteBuilderFat()
{
	product = new Product();
}

ConcreteBuilderFat::~ConcreteBuilderFat()
{
	delete product;
	product = NULL;
}


void ConcreteBuilderThin::buildPartA()
{
	product->SetPartA("瘦子头");
}
void ConcreteBuilderThin::buildPartB()
{
	product->SetPartB("瘦子身子");
}

void ConcreteBuilderThin::buildPartC()
{
	product->SetPartC("瘦子脚");
}

Product* ConcreteBuilderThin::GetResult()
{
	return this->product;
}

ConcreteBuilderThin::ConcreteBuilderThin()
{
	product = new Product();
}

ConcreteBuilderThin::~ConcreteBuilderThin()
{
	delete product;
	product = NULL;
}