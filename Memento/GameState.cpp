#include "GameState.h"
#include<iostream>
GameState::GameState(int level, std::shared_ptr<PlayerState> playerState)
	:m_level{ level }, _playerState{playerState}
{
}

std::shared_ptr<GameStateMemento> GameState::createMemento()
{
	return std::make_shared<GameStateMemento>(m_level,_playerState);
}

void GameState::restoreState(std::shared_ptr<GameStateMemento> memento)
{
	auto currentState{ memento->getState() };
	m_level = currentState.first;
	_playerState = currentState.second;
}

std::pair<int, std::shared_ptr<PlayerState>> GameState::getInfo() const
{
	return std::pair<int, std::shared_ptr<PlayerState>>(m_level,_playerState);
}

void GameState::setState(int level, std::shared_ptr<PlayerState> playerState)
{
	m_level = level;
	_playerState = playerState;
}

void GameState::showState() const
{
	std::cout << "Current Level : " << m_level << std::endl;
	_playerState->showInfo();
}

