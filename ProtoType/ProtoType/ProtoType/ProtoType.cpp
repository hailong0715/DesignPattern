#include "ProtoType.h"
#include <iostream>

ProtoType *ConcreteProtoType1::clone()
{
	return new ConcreteProtoType1(*this);
}

void ConcreteProtoType1::show()
{
	std::cout << "This is ConcreteProtoType1\n";
}

ProtoType* ConcreteProtoType2::clone()
{
	return new ConcreteProtoType2(*this);
}

void ConcreteProtoType2::show()
{
	std::cout << "This is ConcreteProtoType2\n";
}