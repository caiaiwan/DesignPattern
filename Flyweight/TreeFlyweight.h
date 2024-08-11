#pragma once
#include"IFlyweight.h"
#include<string>
class TreeFlyweight :public IFlyweight
{
public:
	TreeFlyweight(const std::string& treeType);
	void showInfo() const override;
private:
	std::string m_treeType;
};

