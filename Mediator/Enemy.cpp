#include "Enemy.h"
#include<iostream>
Enemy::Enemy(float hp, float atk, std::shared_ptr<BattleMediator> bm)
	:CharacterBase{ hp,atk }, m_battleManger{bm}
{
}
void Enemy::attack()
{
	std::cout << "Enemy Attack!" << std::endl;
}

void Enemy::injuried(float atk)
{
	m_hp -= atk;
}

Enemy::~Enemy()
{
	std::cout << "Enemy Died" << std::endl;
}
