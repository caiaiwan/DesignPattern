#include<iostream>
#include"BattleManger.h"
int main() {
	
	auto bm{ std::make_shared<BattleManger>() };
	auto player{ std::make_unique<Player>(300.0f,50.0f,bm) };
	bm->addPlayer(std::move(player));
	for (int i{ 0 }; i < 5; ++i) {
		bm->addEnemy(std::make_shared<Enemy>(100.0f, 10.0f, bm));
	}
	while (!bm->playerLeaveBattle()) {
		bm->playerAttack();
		std::cout<<"Player current HP : " << bm->getPlayerHp() << std::endl;
		bm->enemyLeaveBattle();
		bm->enemyAttack();
	}
	std::cout << "Player current HP : " << bm->getPlayerHp() << std::endl;
	std::cout << "Game Over!" << std::endl;
	return 0;
}