#include "Template.h"
#include <iostream>
void AbstractClass::TemplateMethod()
{
	//模板方法定义算法的骨架
	PrimitiveOperation1();
	PrimitiveOperation2();
}

void ConcreteClass1::PrimitiveOperation1()
{
	std::cout << "算法步骤1" << std::endl;
}

void ConcreteClass1::PrimitiveOperation2()
{
	std::cout << "算法步骤2" << std::endl;
}

void ConcreteClass2::PrimitiveOperation1()
{
	std::cout << "组成部分1" << std::endl;
}

void ConcreteClass2::PrimitiveOperation2()
{
	std::cout << "组成部分2" << std::endl;
}