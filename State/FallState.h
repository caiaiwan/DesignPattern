#pragma once
#include "ICharacterState.h"
class FallState : public ICharacterState
{
	// Í¨¹ý ICharacterState ¼Ì³Ð
	void Enter() override;
	void Execute() override;
	void Exit() override;
};

