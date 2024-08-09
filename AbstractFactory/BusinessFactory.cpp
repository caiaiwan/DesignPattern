#include "BusinessFactory.h"

std::unique_ptr<CharacterBase> BusinessFactory::createdCharatcer()
{
	return std::make_unique<Businessman>();
}

std::unique_ptr<ItemBase> BusinessFactory::createdItem()
{
	return std::make_unique<BusinessItem>();
}
