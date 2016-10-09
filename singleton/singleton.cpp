#include"singleton.h"
Singleton* Singleton::m_singleton = nullptr;
Singleton* Singleton::GetInstance()
{
	if (m_singleton == nullptr)
		m_singleton = new Singleton();
	return m_singleton;
}