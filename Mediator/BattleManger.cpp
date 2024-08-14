#include "BattleManger.h"
#include<iostream>

void BattleManger::enemyAttack()
{
	for (const auto& enemy : _enemies) {
		enemy->attack();
		_player->injuried(enemy->getAtk());
	}
}

void BattleManger::playerAttack()
{
	for (auto& enemy : _enemies) {
		_player->attack();
		enemy->injuried(_player->getAtk());
		break;
	}
}

void BattleManger::enemyLeaveBattle()
{
	for (auto& enemy : _enemies) {
		_enemies.erase(std::remove_if(_enemies.begin(), _enemies.end(), [](const std::shared_ptr<Enemy>& ey) {return (ey->getHp())<0; }), _enemies.end());
	}
}

bool BattleManger::playerLeaveBattle()
{
	if (_player->characterDied()) {
		std::cout << "Player Died!" << std::endl;
		return true;
	}
	return false;
}

void BattleManger::addPlayer(std::unique_ptr<Player> player)
{
	_player.reset(player.release());
}

void BattleManger::addEnemy(std::shared_ptr<Enemy> enemy)
{
	std::cout << "Add a Enemy" << std::endl;
	_enemies.push_back(enemy);
}

float BattleManger::getPlayerHp() const
{
	return _player->getHp();
}


