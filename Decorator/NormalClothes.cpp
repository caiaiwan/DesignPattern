#include "NormalClothes.h"
#include<iostream>
NormalClothes::NormalClothes(std::string name, std::initializer_list<std::pair<std::string, float>> initializerList) :m_name{ name }
{
	auto size{ initializerList.size() };
	auto lbegin{ initializerList.begin() };
	auto lend{ initializerList.end() };
	if (check(size)) {
		for (decltype(size) i{ 0 }; lbegin != lend;++i,++lbegin) {
			m_propertyArr[i].first = (*lbegin).first;
			m_propertyArr[i].second = (*lbegin).second;
		}
	}
	
}
void NormalClothes::showProperty() const 
{
	for (const auto& pty : m_propertyArr) {
		std::cout << pty.first << " : " << pty.second<<std::endl;
	}

}

void NormalClothes::showName() const
{
	std::cout << m_name << std::endl;
}

void NormalClothes::showEquipped(std::string equippedName) const
{
	std::cout << equippedName << std::endl;

}

NormalClothes::~NormalClothes()
{
}

bool NormalClothes::check(size_t size)
{
	return s_propertyNums < size ? false : true;
}
