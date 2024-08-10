#pragma once
#include"ConcreteBuilder.h"
#include"ConcreteProduct.h"
#include<memory>
#include<iostream>
class Director
{
public:
	Director(std::shared_ptr<Builder> build);
	std::shared_ptr<Product> Constructor();
	~Director() = default;
private:
	std::shared_ptr<Builder> m_builder;
};

