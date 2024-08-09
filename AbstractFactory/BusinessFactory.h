#pragma once
#include"ImpFactory.h"
#include"BusinessItem.h"
#include"Businessman.h"
#include<memory>
class BusinessFactory: public ImpFactory
{
public:
	std::unique_ptr<CharacterBase> createdCharatcer() override;
	std::unique_ptr<ItemBase> createdItem() override;
};

