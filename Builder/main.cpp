#include<iostream>
#include"Director.h"
int main() {
	
	std::unique_ptr<Product> product{ std::make_unique<ConcreteProduct>() };
	std::unique_ptr<Builder> builder{ std::make_unique<ConcreteBuilder>() };
	Director dir{std::move(builder)};
	std::cout<<dir.Constructor();
	return 0;
}