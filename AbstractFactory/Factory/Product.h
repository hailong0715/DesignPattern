#ifndef PRODUCT_H_
#define PRODUCT_H_

//ProductA 和 ProductB 分别代表两种不同产品族手机和电脑.比如ProductA代表手机 而ProductB代表电脑

//ProductA1代表Linux操作系统的手机，ProductA2代表windowsx系统手机
class ProductA
{
public:
	virtual void show() = 0;
};


class ProductA1 : public ProductA
{
public:
	ProductA1(){};
	virtual ~ProductA1(){};
	virtual void show();
};

class ProductA2 : public ProductA
{
public:
	ProductA2(){};
	virtual ~ProductA2(){};
	virtual void show();
};


class ProductB
{
public:
	ProductB(){};
	virtual ~ProductB(){};
	virtual void show()=0;
};

//ProductB1代表Linux操作系统的电脑，ProductB2代表Windows系统的电脑
class ProductB1 :public ProductB
{
public:
	ProductB1(){};
	virtual ~ProductB1(){};
	virtual void show();
};

class ProductB2 :public ProductB
{
public:
	ProductB2(){};
	virtual ~ProductB2(){};
	virtual void show();
};
#endif