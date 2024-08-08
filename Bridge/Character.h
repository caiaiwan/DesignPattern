#pragma once
#include"IWeapon.h"
#include<memory>
class Character
{
public:
	Character() = default;
	Character(std::unique_ptr<IWeapon> weapon);
	virtual ~Character() = default;
	virtual void useGun() = 0;
protected:
	std::unique_ptr<IWeapon> m_weapon;
};

