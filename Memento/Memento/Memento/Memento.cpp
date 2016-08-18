#include"Memento.h"
#include <iostream>
GameRole::GameRole(int blood, int energy) :m_blood(blood), m_enery(energy)
{
	
}

Memento* GameRole::Save()
{
	return new Memento(m_blood, m_enery);	
}

void GameRole::Load(Memento& mem)
{
	m_blood = mem.m_blood;
	m_enery = mem.m_enery;
}

void GameRole::Attach()
{
	m_blood -= 10;
	m_enery -= 10;
}

void GameRole::Show() const
{
	std::cout << m_blood << "  " << m_enery << std::endl;
}

 Memento::Memento(int blood, int energy)
{
	m_blood = blood;
	m_enery = energy;
}

 void Memento::SetState(int blood, int energy)
 {
	 m_blood = blood;
	 m_enery = energy;
 }

 void CareTaker::Save(Memento mem)
 {
	 vec.push_back(mem);
 }

 Memento CareTaker::Restore(int index)
 {
	 return vec[index];
 }