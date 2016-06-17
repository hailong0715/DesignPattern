#ifndef BUILDER_H_
#define BUILDER_H_
#include "product.h"
class builder
{

	//按照统一步骤构建产品，但是产品的构建过程对客户不可见，这样就可以创建不一样的产品，将对象的构建和它的表示实现分离的目的
public:
	virtual void buildPartA(){};
	virtual void buildPartB(){};
	virtual void buildPartC(){};

public:
	Product *product;
};

class ConcreteBuilderFat : public builder
{
public:
	ConcreteBuilderFat();
	~ConcreteBuilderFat();
	void buildPartA();
	void buildPartB();
	void buildPartC();
	Product * GetResult();
};

class ConcreteBuilderThin : public builder
{
public:
	ConcreteBuilderThin();
	~ConcreteBuilderThin();
	void buildPartA();
	void buildPartB();
	void buildPartC();
	Product * GetResult();
};
#endif

