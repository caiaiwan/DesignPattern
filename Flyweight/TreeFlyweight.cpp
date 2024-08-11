#include "TreeFlyweight.h"
#include<iostream>
TreeFlyweight::TreeFlyweight(const std::string& treeType) :m_treeType{treeType}
{ 

}

void TreeFlyweight::showInfo() const
{
	std::cout << "TreeType : " << m_treeType << std::endl;
}
