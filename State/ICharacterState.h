#pragma once
class ICharacterState
{
public:
	virtual void Enter() = 0;
	virtual void Execute() = 0;
	virtual void Exit() = 0;
	virtual ~ICharacterState()  = default;
};

