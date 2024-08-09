#pragma once
#include "CharacterBase.h"
class Businessman :public CharacterBase
{
public:
	Businessman();
	void showCharacterType() const override;
	~Businessman();
};

