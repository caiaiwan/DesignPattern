#pragma once
#include "ICharacterState.h"
class IdleState : public ICharacterState
{
public:


	// ͨ�� ICharacterState �̳�
	void Enter() override;

	void Execute() override;

	void Exit() override;

};

