#include "Strategy.h"
#include<iostream>
void Strategy::playerState()
{
	std::cout << currentState() << std::endl;
}

Strategy::~Strategy()
{
}
