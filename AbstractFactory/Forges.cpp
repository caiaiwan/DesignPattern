#include "Forges.h"
#include<iostream>
Forges::Forges()
{
	std::cout << "Forges created." << std::endl;

}

void Forges::showItem() const
{
	std::cout << "This is Forges" << std::endl;

}

Forges::~Forges()
{
	std::cout << "Forges destoried." << std::endl;

}
