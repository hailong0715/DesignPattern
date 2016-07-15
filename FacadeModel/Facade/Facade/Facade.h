/*Facade 为外观类，处理客户端的请求，外观类屏蔽了客户端与各子系统，
使得客户端不需要知道子系统的实现细节，各子系统通过外观类统一对外提供
比如说有个VC的编译功能，通过VC的BUILD对外提供，我们不需要知道内部
标识符解析，符号解析等等的细节.

*/


#include<iostream>

class Class1
{
public:
	void MethodA(){ std::cout << "class 1 MethodA\n"; };

};

class Class2
{
public:
	void MethodB(){ std::cout << "class 2 MethodB\n"; };

};

class Class3
{
public:
	void MethodC(){ std::cout << "class 3 MethodC\n"; };

};

class Class4
{
public:
	void MethodD(){ std::cout << "class 4 MethodD\n"; };

};

class Class5
{
public:
	void MethodE(){ std::cout << "class 5 MethodE\n"; };

};

class Facade
{
public:
	Facade();
	~Facade();
	void FunctionA();
	void FuncTionB();
private:
	Class1* pm_class1;
	Class2* pm_class2;
	Class3* pm_class3;
	Class4* pm_class4;
	Class5* pm_class5;
};