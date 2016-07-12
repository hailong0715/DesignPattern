#include "Template.h"

int main()
{
	AbstractClass *AC1 = new ConcreteClass1();
	AC1->TemplateMethod();

	AbstractClass *AC2 = new ConcreteClass2();
	AC2->TemplateMethod();

	delete AC1;
	delete AC2;

}