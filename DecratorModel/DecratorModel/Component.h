#ifndef COMPONENT_H_
#define COMPONENT_H_
#include <iostream>

//定义一个原始的抽象类蛋糕，装饰器的功能是给蛋糕加上各种装饰，如奶油，巧克力，瓜子仁，花生米等
class Cake
{

public:
	virtual void showCake()=0;
	virtual ~Cake(){};
	std::string name;
};

class ConcreteCake :public Cake
{
public:
	ConcreteCake()
	{
		name = "原始蛋糕";
	}
	void showCake(){ std::cout << name.c_str() << std::endl; };
	virtual  ~ConcreteCake(){};
};

#endif