#pragma once
#include "CharacterBase.h"
#include<memory>
#include"BattleMediator.h"
class Enemy :public CharacterBase
{
public:
	Enemy(float hp, float atk, std::shared_ptr<BattleMediator> bm);
	// ͨ�� CharacterBase �̳�
	void attack() override;
	void injuried(float atk) override;
	~Enemy();
private:
	std::shared_ptr<BattleMediator> m_battleManger;
};

