#include "ProtoType.h"
#include "resume.h"
int main()
{
	/*
	ConcreteProtoType1 *proto1 = new ConcreteProtoType1();
	ConcreteProtoType1 *proto11 = (ConcreteProtoType1*)proto1->clone();
	proto1->show();
	proto11->show();


	ConcreteProtoType2* proto2 = new ConcreteProtoType2();
	ConcreteProtoType2 *proto22 = (ConcreteProtoType2*)proto2->clone();
	proto2->show();
	proto22->show();

	delete proto1;
	delete proto11;
	delete proto2;
	delete proto22;
	*/

	ResumeA* resuA = new ResumeA("xiaoming");
	ResumeA* resuA1 = resuA->clone();
	ResumeA* resuA2 = resuA1->clone();
	resuA2->setName("xiaohua");

	ResumeA * resu3 = resuA2->clone();
	ResumeA* resu4 = resu3->clone();

	delete resuA;
	delete resuA1;
	delete resuA2;
	delete resu3;
	delete resu4;
	return 0;

}