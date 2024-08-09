#include "ForgingFactory.h"

std::unique_ptr<CharacterBase> ForgingFactory::createdCharatcer()
{
    return std::make_unique<Blacksmith>();
}

std::unique_ptr<ItemBase> ForgingFactory::createdItem()
{
    return std::make_unique<Forges>();
}
