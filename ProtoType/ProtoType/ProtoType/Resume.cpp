#include "resume.h"

Resume::Resume(char* str)
{
	if (NULL == str)
	{
		m_name = new char[1];
		m_name = '\0';
	}
	else
	{
		int len = strlen(str);
		m_name = new char[len + 1];
		strcpy_s(m_name, len + 1, str);
	}
}

Resume::Resume(const Resume& resu)
{
	int len = strlen(resu.m_name);
	m_name = new char[len + 1];
	strcpy_s(m_name, len + 1, resu.m_name);
}

Resume::~Resume()
{
	delete m_name;
	m_name = NULL;
}

ResumeA::ResumeA(char*str) :Resume(str)
{}

ResumeA::ResumeA(const ResumeA& other) : Resume(other)
{

}

void ResumeA::setName(char *str)
{
	delete m_name;
	m_name = new char[strlen(str) + 1];
	strcpy_s(m_name, strlen(str) + 1, str);
}

ResumeA * ResumeA::clone()
{
	std::cout << this->m_name << std::endl;
	return new ResumeA(*this);
}

ResumeA::~ResumeA(){}

ResumeB::ResumeB(char*str) :Resume(str)
{}

ResumeB::ResumeB(const ResumeB& other) : Resume(other)
{

}

ResumeB * ResumeB::clone()
{
	std::cout << m_name << std::endl;
	return new ResumeB(*this);
}
ResumeB::~ResumeB(){}