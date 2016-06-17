#include "Director.h"

void Director::Construct()
{
	m_builder->buildPartA();
	m_builder->buildPartB();
	m_builder->buildPartC();
}

void Director::SetBuilder(builder * builder)
{
	m_builder = builder;
}