#include"Facade.h"

Facade::Facade()
{
	pm_class1 = new Class1();
	pm_class2 = new Class2();
	pm_class3 = new Class3();
	pm_class4 = new Class4();
	pm_class5 = new Class5();
}

Facade::~Facade()
{
	delete pm_class1;
	delete pm_class2;
	delete pm_class3;
	delete pm_class4;
	delete pm_class5;
}

//功能A
void Facade::FunctionA()
{
	pm_class1->MethodA();
	pm_class2->MethodB();
	pm_class3->MethodC();
}

//功能B
void Facade::FuncTionB()
{
	pm_class1->MethodA();
	pm_class2->MethodB();
	pm_class4->MethodD();
	pm_class5->MethodE();
}