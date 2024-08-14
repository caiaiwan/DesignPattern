#include "IdleState.h"
#include<iostream>
void IdleState::Enter()
{
	std::cout << "Enter Idle State..." << std::endl;
}

void IdleState::Execute()
{
	std::cout << "Execute Idle State..." << std::endl;
}

void IdleState::Exit()
{
	std::cout << "Exit Idle State..." << std::endl;
}
