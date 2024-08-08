#pragma once
#include"Strategy.h"
class Context
{
public:
	Context(Strategy* strategy);
	~Context();
	void showState();
	void setStragegy(Strategy* strategy);
private:
	Strategy* m_strategy;
};

