#pragma once
#include"EnemyBase.h"
#include<memory>
class EnemyCreator
{
public:
	virtual std::unique_ptr<EnemyBase> createEnemy() = 0;
	virtual ~EnemyCreator() = default;
};

