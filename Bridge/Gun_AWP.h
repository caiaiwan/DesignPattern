#pragma once
#include"IWeapon.h"
class Gun_AWP:public IWeapon
{
public:
	Gun_AWP() = default;
	virtual ~Gun_AWP() = default;
	void shoot() override;
};

