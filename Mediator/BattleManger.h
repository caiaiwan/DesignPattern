#pragma once
#include "BattleMediator.h"
#include"Player.h"
#include"Enemy.h"
#include<vector>
class BattleManger : public BattleMediator
{
public:
	void enemyAttack() override;
	void playerAttack() override;
	void enemyLeaveBattle();
	bool playerLeaveBattle();
	void addPlayer(std::unique_ptr<Player> player);
	void addEnemy(std::shared_ptr<Enemy> enemy);
	float getPlayerHp() const;
private:
	std::unique_ptr<Player> _player;
	std::vector<std::shared_ptr<Enemy>> _enemies;
	
};

