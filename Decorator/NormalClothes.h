#pragma once
#include "Trapping.h"
#include<string>
#include<utility>
#include<array>
#include<initializer_list>
class NormalClothes :public Trapping
{
public:
	NormalClothes() = default;
	NormalClothes(std::string name, std::initializer_list < std::pair<std::string, float>> initializerList);
	virtual void showProperty() const override ;
	virtual void showName()const  override;
	virtual void showEquipped(std::string equippedName)const  override;
	virtual ~NormalClothes();
private:
	static const int s_propertyNums{5};
	std::array<std::pair<std::string, float>,s_propertyNums> m_propertyArr;
	std::string m_name;
	std::string m_euipped;
	bool check(size_t size);
};

