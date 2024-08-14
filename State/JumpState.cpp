#include "JumpState.h"
#include<iostream>
void JumpState::Enter()
{
	std::cout << "Enter Jump State..." << std::endl;
}

void JumpState::Execute()
{
	std::cout << "Execute Jump State..." << std::endl;
}

void JumpState::Exit()
{
	std::cout << "Exit Jump State..." << std::endl;
}
