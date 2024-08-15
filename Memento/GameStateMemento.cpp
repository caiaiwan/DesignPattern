#include "GameStateMemento.h"

GameStateMemento::GameStateMemento(int level, std::shared_ptr<PlayerState> playerState)
	:m_level{ level }, _playerState{playerState}
{
}

std::pair<int, std::shared_ptr<PlayerState>> GameStateMemento::getState() const
{
	return std::pair<int, std::shared_ptr<PlayerState>>(m_level,_playerState);
}

void GameStateMemento::setState(int level, std::shared_ptr<PlayerState> playerState)
{
	m_level = level;
	_playerState = playerState;
}
