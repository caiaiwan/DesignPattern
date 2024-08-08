#pragma once
#include<string>

class Trapping
{
public:
	virtual void showProperty() const  = 0;
	virtual void showName() const  = 0;
	virtual void showEquipped(std::string equippedName) const  = 0;
	virtual ~Trapping();
};

