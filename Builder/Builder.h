#pragma once
#include"Product.h"
#include<memory>
class Builder
{
public:
	virtual std::shared_ptr<Product> getResult();
	virtual void buildPart1() = 0;
	virtual void buildPart2() = 0;
	virtual void buildPart3() = 0;
	virtual ~Builder() = default;
protected:
	std::shared_ptr<Product> m_product;
};

