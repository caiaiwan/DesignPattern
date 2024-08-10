#pragma once
#include "Product.h"
class ConcreteProduct :public Product
{
public:
	ConcreteProduct() = default;
	void showInfo() const override;
};

