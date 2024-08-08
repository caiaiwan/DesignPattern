#include "HeadClothes.h"
#include<iostream>
HeadClothes::HeadClothes(Trapping* trp) :m_trapping{trp}
{
}

void HeadClothes::showProperty() const
{
	std::cout << "ͷ��װ����������:" << std::endl;
	m_trapping->showProperty();
}

void HeadClothes::showName() const
{
	std::cout << "ͷ��װ����������:" << std::endl;
	m_trapping->showName();
}

void HeadClothes::showEquipped(std::string equippedName) const
{
	std::cout << "ͷ��װ��װ��������:" << std::endl;
	m_trapping->showEquipped(equippedName);
}

HeadClothes::~HeadClothes()
{
}
