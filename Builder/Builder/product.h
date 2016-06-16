#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>
class Product
{
public:
	void SetPartA(std::string );
	void SetPartB(std::string );
	void SetPartC(std::string );

private:
	std::string partA, partB, partC;

};

#endif