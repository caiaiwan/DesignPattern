#pragma once
class IWeapon
{
public:
	IWeapon() = default;
	virtual ~IWeapon() = default;
	virtual void shoot() = 0;
};

