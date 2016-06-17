#ifndef DIRECTOR_H_
#define DIRECTOR_H_
#include"builder.h"
class Director
{
public:
	void Construct();
	void SetBuilder(builder *);
private:
	builder* m_builder;
};

#endif