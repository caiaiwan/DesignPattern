#pragma once
#include "ItemBase.h"
class BusinessItem :public ItemBase
{
public:
	BusinessItem();
	void showItem() const override;
	~BusinessItem();
};

