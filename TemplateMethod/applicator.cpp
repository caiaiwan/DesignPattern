#include "applicator.h"
#include<iostream>

void Applicator::Run()
{
	step1();
	if (step2()) {
		step3();
	}
	for (int i{ 0 }; i < 4; ++i) {
		step4();
	}
	step5();
}

Applicator::~Applicator()
{
}

void Applicator::step1()
{
	std::cout << "This is step 1" << std::endl;
}

bool Applicator::step2()
{
	std::cout << "This is step 2" << std::endl;
	return true;
}

void Applicator::step3()
{
	std::cout << "This is step 3" << std::endl;
}


