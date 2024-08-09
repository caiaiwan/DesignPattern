#include "Businessman.h"
#include<iostream>
Businessman::Businessman()
{
	std::cout << "Businessman created." << std::endl;
}
void Businessman::showCharacterType() const
{
	std::cout << "This is the businessman." << std::endl;
}

Businessman::~Businessman()
{
	std::cout << "Businessman destoried." << std::endl;
}
