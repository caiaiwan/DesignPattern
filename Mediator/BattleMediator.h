#pragma once
class BattleMediator
{
public:
	virtual void enemyAttack() = 0;
	virtual void playerAttack() = 0;
	virtual ~BattleMediator() = default;

};

