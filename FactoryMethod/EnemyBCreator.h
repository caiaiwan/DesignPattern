#pragma once
#include "EnemyCreator.h"
#include<memory>
#include"EnemyB.h"
class EnemyBCreator :public EnemyCreator
{
public:
	virtual std::unique_ptr<EnemyBase> createEnemy() override;
};

