#include "DecoratorClothes.h"

DecoratorClothes::DecoratorClothes(Trapping* trp) :m_trapping{trp}
{
}

void DecoratorClothes::showProperty() const
{
	m_trapping->showProperty();
}

void DecoratorClothes::showName() const
{
	m_trapping->showName();
}

void DecoratorClothes::showEquipped(std::string equippedName) const
{
	m_trapping->showEquipped(equippedName);
}

DecoratorClothes::~DecoratorClothes()
{
}
