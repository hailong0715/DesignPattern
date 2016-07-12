class AbstractClass
{
public:
	virtual void PrimitiveOperation1()=0;
	virtual void PrimitiveOperation2()=0;
	void TemplateMethod();
	virtual ~AbstractClass(){}
};

class ConcreteClass1 :public AbstractClass
{
public:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
	~ConcreteClass1(){}
};

class ConcreteClass2 :public AbstractClass
{
public:
	virtual void PrimitiveOperation1();
	virtual void PrimitiveOperation2();
	~ConcreteClass2(){}

};