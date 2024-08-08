#pragma once
#include<string>
class Strategy
{
public:
	Strategy() = default;
	void playerState();
	virtual ~Strategy();
protected:
	virtual std::string currentState() = 0 ;
};

