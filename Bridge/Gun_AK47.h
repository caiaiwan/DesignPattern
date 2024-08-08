#pragma once
#include"IWeapon.h"
class Gun_AK47 :public IWeapon 
{
public:
	Gun_AK47() = default;
	virtual ~Gun_AK47() = default;
	void shoot() override;
};

