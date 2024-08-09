#pragma once
#include "ImpFactory.h"
#include<memory>
#include"CharacterBase.h"
#include"ItemBase.h"
class ForgingFactory : public ImpFactory
{
public:
	std::unique_ptr<CharacterBase> createdCharatcer() override;
	std::unique_ptr<ItemBase> createdItem() override;
};

