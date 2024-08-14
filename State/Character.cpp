#include "Character.h"
#include<iostream>
Character::Character(std::shared_ptr<ICharacterState> state) :m_characterState{state}
{
}

void Character::updateState()
{
	if (m_characterState) {
		m_characterState->Execute();
	}
}

void Character::changeState(std::shared_ptr<ICharacterState> newState)
{
	std::cout << "Change State..." << std::endl;
	if (m_characterState) {
		m_characterState->Exit();
	}
	m_characterState = newState;
	if (m_characterState) {
		m_characterState->Enter();
	}
}


