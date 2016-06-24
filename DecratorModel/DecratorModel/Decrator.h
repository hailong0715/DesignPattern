#include "Component.h"

class CakeDecrator :public Cake
{
protected:
	Cake* pCake;  //维护一个Cake对象的引用，为Cake对象添加装饰
public:
	virtual void showCake() = 0;
	virtual	~CakeDecrator(){};
};

class CakeDecratorMilk : public CakeDecrator
{
public:
	CakeDecratorMilk(Cake* pCake)
	{
		this->pCake = pCake;
	}
	void showCake()
	{
		this->name = pCake->name + "加奶油";
		std::cout << name.c_str()<<std::endl;
	};
	virtual ~CakeDecratorMilk(){};
};

class CakeDecratorCholate : public CakeDecrator
{
public:
	CakeDecratorCholate(Cake* pCake)
	{
		this->pCake = pCake;
	}
	void showCake()
	{
		this->name =pCake->name + "加巧克力";
		std::cout << name.c_str() << std::endl;
	};
	virtual ~CakeDecratorCholate(){};
};