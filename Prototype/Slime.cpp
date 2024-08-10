#include "Slime.h"
#include<iostream>
Slime::Slime(float hp, std::string name) :m_hp{ hp }, m_currentState{0}, m_name{ name }
{
}

Slime::Slime(const Slime& otherSlime) :m_hp{ otherSlime.m_hp }, m_currentState{ otherSlime.m_currentState }, m_name{otherSlime.m_name}
{

}

void Slime::split()
{
	std::cout << "Begin split" << std::endl;
	std::cout << m_name << " is split"<<std::endl;
	m_hp /= 2;
	m_currentState++;
}

std::shared_ptr<SplinterBase> Slime::clone()
{
	return std::make_shared<Slime>(*this);
}

void Slime::showState() const
{
	std::cout << m_name << " : " << "hp" << m_hp << std::endl;
	std::cout << "split counts: " << m_currentState<<std::endl;
}
