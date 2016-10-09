#include <iostream>
class Singleton
{
public:
	~Singleton(){};
	void show(){ std::cout << "This is a singleton class"; }
	static Singleton* GetInstance();
private:
	Singleton(){};
	static Singleton* m_singleton;
};