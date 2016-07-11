#ifndef PROTOTYPE_H_
#define PROTOTYPE_H_
class ProtoType
{
public:
	virtual  ~ProtoType(){};
	virtual  ProtoType* clone() = 0;
	virtual void show(){};
};

class ConcreteProtoType1:ProtoType
{
public:
	virtual ProtoType* clone();
	virtual void show();
};

class ConcreteProtoType2 :ProtoType
{
public:
	virtual ProtoType* clone();
	virtual void show();
};


#endif