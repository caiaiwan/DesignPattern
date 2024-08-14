#pragma once
#include "CharacterBase.h"
#include"BattleMediator.h"
#include<memory>
class Player :public CharacterBase
{
public:
	Player(float hp, float atk, std::shared_ptr<BattleMediator> bm);
	void attack() override;
	void injuried(float atk) override;
private:
	std::shared_ptr<BattleMediator> m_battleManger;
};

