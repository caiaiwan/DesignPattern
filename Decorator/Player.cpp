#include "Player.h"
#include<iostream>
Player::Player(std::string playerName) :m_name{ playerName }, m_currentClothesNums{0}
{
}

void Player::showTrappings() const
{
	std::cout << m_name <<"装备如下:" << std::endl;
	std::cout << std::endl;
	for (const auto& clothes : m_clothesArr) {
		clothes->showName();
		clothes->showProperty();
		std::cout << std::endl;
	}
}

void Player::equipClothes(Trapping* clothes)
{
	if (check()) {
		m_clothesArr[m_currentClothesNums] = clothes;
		m_currentClothesNums++;
		
	}
}

bool Player::check()
{
	return m_currentClothesNums < 4 ? true : false;
}


