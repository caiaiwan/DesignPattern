#pragma once
#include"Character.h"
#include<memory>
#include"IWeapon.h"

class Player:public Character
{
public:
	Player() = default;
	Player(std::unique_ptr<IWeapon> weapon);
	~Player() = default;
	void useGun() override;

};

