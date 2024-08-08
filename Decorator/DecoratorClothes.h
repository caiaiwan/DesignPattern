#pragma once
#include "Trapping.h"
class DecoratorClothes :public Trapping
{
	
public:
	DecoratorClothes() = default;
	DecoratorClothes(Trapping* trp);
	virtual void showProperty() const override;
	virtual void showName() const override;
	virtual void showEquipped(std::string equippedName) const override;
	virtual ~DecoratorClothes();
private:
	Trapping* m_trapping;
};

