#pragma once
#include"OldAdapter.h"
#include"ITarget.h"
#include<memory>
class Adapter:public ITarget
{
public:
	Adapter(std::unique_ptr<OldAdapter> adaptee);
	void requst() override;
private:
	std::unique_ptr<OldAdapter> m_adaptee;
};

