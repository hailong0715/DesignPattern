#include <iostream>

class Resume
{
public:
	Resume(char*);
	Resume(const Resume &);
	virtual ~Resume();
	virtual Resume * clone() = 0;
protected:
	char* m_name;

};

class ResumeA :public Resume
{
public:
	ResumeA(char*);
	ResumeA(const ResumeA&);
	virtual ~ResumeA();
	virtual ResumeA* clone();
	void setName(char *);
};

class ResumeB :public Resume
{
public:
	ResumeB(char*);
	ResumeB(const ResumeB&);
	virtual ~ResumeB();
	virtual ResumeB* clone();
};