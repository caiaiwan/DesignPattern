#include "HeadClothes.h"
#include<iostream>
HeadClothes::HeadClothes(Trapping* trp) :m_trapping{trp}
{
}

void HeadClothes::showProperty() const
{
	std::cout << "头部装饰属性如下:" << std::endl;
	m_trapping->showProperty();
}

void HeadClothes::showName() const
{
	std::cout << "头部装饰名称如下:" << std::endl;
	m_trapping->showName();
}

void HeadClothes::showEquipped(std::string equippedName) const
{
	std::cout << "头部装饰装备者如下:" << std::endl;
	m_trapping->showEquipped(equippedName);
}

HeadClothes::~HeadClothes()
{
}
