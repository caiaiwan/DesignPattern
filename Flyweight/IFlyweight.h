#pragma once
class IFlyweight
{
public:
	virtual void showInfo() const = 0;
	virtual ~IFlyweight() = default;
};

