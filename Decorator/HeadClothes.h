#pragma once
#include "DecoratorClothes.h"
class HeadClothes :public DecoratorClothes
{
public:
	HeadClothes() = default;
	HeadClothes(Trapping* trp);
	virtual void showProperty() const override;
	virtual void showName() const override;
	virtual void showEquipped(std::string equippedName) const override;
	virtual ~HeadClothes();
private:
	Trapping* m_trapping;
};

