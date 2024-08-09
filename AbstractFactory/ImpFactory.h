#pragma once

#include"Forges.h"
#include"Blacksmith.h"
#include<memory>
class ImpFactory
{
public:
	virtual std::unique_ptr<CharacterBase> createdCharatcer() = 0;
	virtual std::unique_ptr<ItemBase> createdItem() = 0;
};

