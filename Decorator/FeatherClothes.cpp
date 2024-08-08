#include "FeatherClothes.h"
#include<iostream>
FeatherClothes::FeatherClothes(Trapping* trp) :m_trapping{trp}
{
}

void FeatherClothes::showProperty() const
{
	std::cout << "羽毛装饰属性如下:" << std::endl;
	m_trapping->showProperty();
}

void FeatherClothes::showName() const
{
	std::cout << "羽毛装饰属性如下:" << std::endl;
	m_trapping->showName();
}

void FeatherClothes::showEquipped(std::string equippedName) const
{
	std::cout << "羽毛装饰属性如下:" << std::endl;
	m_trapping->showEquipped(equippedName);
}

FeatherClothes::~FeatherClothes()
{
}
