#pragma once
#include "ICharacterState.h"
class FallState : public ICharacterState
{
	// ͨ�� ICharacterState �̳�
	void Enter() override;
	void Execute() override;
	void Exit() override;
};

