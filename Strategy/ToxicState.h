#pragma once
#include "strategy.h"
#include<string>
class ToxicState :public Strategy
{
protected:
	virtual std::string currentState() override;
};

