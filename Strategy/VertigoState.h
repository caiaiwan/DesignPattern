#pragma once
#include"strategy.h"
#include<string>
class VertigoState:public Strategy
{
protected:
	virtual std::string currentState() override;
};

