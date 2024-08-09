#pragma once
class ItemBase
{
public:
	virtual void showItem() const = 0;
	virtual ~ItemBase() = default;
};

