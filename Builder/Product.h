#pragma once
class Product
{
public:
	virtual void showInfo() const = 0;
	virtual ~Product()  = default;
};

