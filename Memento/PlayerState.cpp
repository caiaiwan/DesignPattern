#include "PlayerState.h"
#include<iostream>
PlayerState::PlayerState(int hp, int atk, const std::string& name)
	:m_hp{ hp }, m_atk{ atk }, m_name{name}
{
}

void PlayerState::showInfo() const
{
	std::cout << "Name: " << m_name << " HP: " << m_hp << " ATK: " << m_atk << std::endl;
}
