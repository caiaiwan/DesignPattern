#pragma once
#include "CharacterBase.h"
class Blacksmith :public CharacterBase
{
public:
	Blacksmith();
	void showCharacterType() const override;
	~Blacksmith();
};

