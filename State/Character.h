#pragma once
#include<memory>
#include"IdleState.h"
#include"FallState.h"
#include"JumpState.h"
#include"ICharacterState.h"
class Character
{
public:
	Character(std::shared_ptr<ICharacterState> state);
	void updateState();
	void changeState(std::shared_ptr<ICharacterState> newState);
private:
	std::shared_ptr<ICharacterState> m_characterState;
};

