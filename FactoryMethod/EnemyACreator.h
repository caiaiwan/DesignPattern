#pragma once
#include "EnemyCreator.h"
#include"EnemyA.h"
#include<memory>
class EnemyACreator :public EnemyCreator
{
public:
	virtual std::unique_ptr<EnemyBase> createEnemy() override;
};

