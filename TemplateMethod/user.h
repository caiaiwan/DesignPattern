#pragma once
#include"applicator.h"
class User:public Applicator
{
public:
	User() = default;
	virtual ~User();
protected:
	virtual void step4() override;
	virtual void step5() override;
};

