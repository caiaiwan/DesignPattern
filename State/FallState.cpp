#include "FallState.h"
#include<iostream>
void FallState::Enter()
{
	std::cout << "Enter Fall State..." << std::endl;
}

void FallState::Execute()
{
	std::cout << "Execute Fall State..." << std::endl;
}

void FallState::Exit()
{
	std::cout << "Exit Fall State..." << std::endl;
}
