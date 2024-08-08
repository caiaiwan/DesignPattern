#pragma once
#include "DecoratorClothes.h"
class FeatherClothes :public DecoratorClothes
{
public:
	FeatherClothes() = default;
	FeatherClothes(Trapping* trp);
	virtual void showProperty() const override;
	virtual void showName() const override;
	virtual void showEquipped(std::string equippedName) const override;
	virtual ~FeatherClothes();
private:
	Trapping* m_trapping;
};

