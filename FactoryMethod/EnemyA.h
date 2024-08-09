#pragma once
#include "EnemyBase.h"
class EnemyA : public EnemyBase
{
public:
	EnemyA();
	virtual ~EnemyA();
	void showEnemy() override;
};

