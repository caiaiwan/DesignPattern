#include "EnemyA.h"
#include<iostream>
EnemyA::EnemyA()
{
	std::cout << "EnemyA is created." << std::endl;
}
EnemyA::~EnemyA()
{
	std::cout << "EnemyA is destoried." << std::endl;
}
void EnemyA::showEnemy()
{
	std::cout << "This is the EnemyA." << std::endl;
}
