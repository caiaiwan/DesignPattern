#pragma once
#include "Builder.h"
#include"ConcreteProduct.h"
#include<memory>
class ConcreteBuilder :public Builder
{
public:
	void buildPart1() override;
	void buildPart2() override;
	void buildPart3() override;
	~ConcreteBuilder() = default;
};

