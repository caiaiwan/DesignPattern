#include "BusinessItem.h"
#include<iostream>
BusinessItem::BusinessItem()
{
	std::cout << "Business's item created." << std::endl;
}

void BusinessItem::showItem() const
{
	std::cout << "The business's item." << std::endl;
}

BusinessItem::~BusinessItem()
{
	std::cout << "Business's item destoried." << std::endl;
}
