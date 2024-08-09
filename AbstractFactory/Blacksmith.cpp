#include "Blacksmith.h"
#include<iostream>
Blacksmith::Blacksmith()
{
	std::cout << "Blacksmith created." << std::endl;
}

void Blacksmith::showCharacterType() const
{
	std::cout << "This is blacksmith." << std::endl;
}

Blacksmith::~Blacksmith()
{
	std::cout << "Blacksmith destoried." << std::endl;
}
