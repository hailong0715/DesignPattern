#ifndef BUILDER_H_
#define BUILDER_H_
#include "product.h"
class builder
{
public:
	void buildPartA(){};
	void buildPartB(){};
	void buildPartC(){};

public:
	Product *product;
};

class ConcreteBuilder : public builder
{
public:
	void buildPartA();
	void buildPartB();
	void buildPartC();
	Product * GetResult();
};
#endif

