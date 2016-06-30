#include <iostream>

class Graphic
{
public:
	void virtual Draw()=0;
	virtual ~Graphic();
};

class Image :Graphic
{
public:
	Image(std::string  str);
	virtual ~Image();
	virtual void Draw();

private:
	std::string filename;
};

class ImageProxy : Graphic
{
public:
	ImageProxy(std::string  str);
	virtual void Draw();
	virtual ~ImageProxy();
private:
	Image* pImg;
	std::string filename;
};