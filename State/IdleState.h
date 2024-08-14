#pragma once
#include "ICharacterState.h"
class IdleState : public ICharacterState
{
public:


	// Í¨¹ý ICharacterState ¼Ì³Ð
	void Enter() override;

	void Execute() override;

	void Exit() override;

};

