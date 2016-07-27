#include <iostream>
class Player
{
protected:
	std::string m_name;
public:
	virtual void Attack() = 0;
	virtual void Defend() = 0;
	virtual ~Player(){};
	Player(const char * name){ m_name = name; }
};

class Forwards :public Player
{
public:
	Forwards(const char* name) :Player(name){};
	virtual ~Forwards(){};
	virtual void Attack();
	virtual void Defend();
};

class Center :public Player
{
public:
	Center(const char* name) :Player(name){};
	virtual ~Center(){};
	virtual void Attack();
	virtual void Defend();
};

class Guards :public Player
{
public:
	Guards(const char* name) :Player(name){};
	virtual ~Guards(){};
	virtual void Attack();
	virtual void Defend();
};

//Õ‚ºÆ÷–∑Ê
class FroeignCenter
{
public:
	FroeignCenter(const char* name) { m_name = name; };
	void Attack();
	void Defend();
private:
	std::string m_name;
};

class Translater : public Player
{
private:
	FroeignCenter* pForCenter;
public:
	Translater(const char *);
	void Attack();
	void Defend();

};
