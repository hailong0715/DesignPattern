#include "Facade.h"

int main()
{
	/*通过外观类，客户不需要所需功能的内部各个类如何处理请求，
	如何实现这个功能，内部类的修改不影响客户端的代码，客户端不需要重新需要代码
	*/
	Facade facade;
	facade.FunctionA();//客户需要的功能A
	facade.FuncTionB();//客户需要的功能B
	return 0;
}