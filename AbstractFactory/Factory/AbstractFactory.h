/*抽象工厂模式是一个简单的模式，使用的场景非常多，大家在软件产品开发过程中，
涉及到不同操作系统的时候，都可以考虑使用抽象工厂模式，例如一个应用，需要在三个不同平台上运行：
Windows、Linux、Android（Google发布的智能终端操作系统）上运行，你会怎么设计？分别设计三套不同的应用？非也非也，
通过抽象工厂模式屏蔽掉操作系统对应用的影响。三个不同操作系统上的软件功能、应用逻辑、UI都应该是非常类似，唯一不同的是调用不同的工厂方法，
由不同的产品类去处理与操作系统交互的信息。*/



#include "Product.h"

class ProductA;
class ProductB;
class AbstreactFactory
{
public:
	virtual ProductA* CreateProductA() = 0;
	virtual ProductB* CreateProductB() = 0;
};

class ConcreteFactoryA : public AbstreactFactory
{
public:
	ConcreteFactoryA(){};
	virtual ~ConcreteFactoryA(){};
	virtual ProductA* CreateProductA();
	virtual ProductB* CreateProductB();
};

class ConcreteFactoryB : public AbstreactFactory
{
public:
	ConcreteFactoryB(){};
	virtual ~ConcreteFactoryB(){};
	virtual ProductA* CreateProductA();
	virtual ProductB* CreateProductB();
};