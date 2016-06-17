#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>

class Product
{

public:
	void SetPartA(std::string str){ partA = str; }
	void SetPartB(std::string str){ partB = str; };
	void SetPartC(std::string str){ partC = str; }
	void ShowPartA(){ std::cout << partA.c_str() << std::endl; }
	void ShowPartB(){ std::cout << partB.c_str() << std::endl; }
	void ShowPartC(){ std::cout << partC.c_str() << std::endl; }

private:
	std::string partA,partB,partC;
};

#endif
