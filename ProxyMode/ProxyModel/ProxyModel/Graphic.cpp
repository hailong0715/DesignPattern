#include "Graphic.h"

Graphic::~Graphic()
{}

Image::Image(std::string  str)
{
	filename = str;
}

void Image::Draw()
{
	std::cout << filename.c_str() << "  Image Show" << std::endl;
}

Image::~Image()
{}


ImageProxy::ImageProxy(std::string  str)
{
	filename = str;
}

void ImageProxy::Draw()
{
	if (pImg == NULL)
		pImg = new Image(filename);
	pImg->Draw();
}

ImageProxy::~ImageProxy()
{
	if (NULL != pImg)
		delete pImg;
}