#pragma once
#include "ICharacterState.h"
class JumpState : public ICharacterState
{
public:


	// ͨ�� ICharacterState �̳�
	void Enter() override;

	void Execute() override;

	void Exit() override;

};

