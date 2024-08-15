#pragma once
#include<memory>
#include<utility>
#include"PlayerState.h"
class GameStateMemento
{
public:

	GameStateMemento(int level, std::shared_ptr<PlayerState> playerState);
	std::pair<int, std::shared_ptr<PlayerState>> getState() const;
	void setState(int level , std::shared_ptr<PlayerState> playerState);
private:
	int m_level;
	std::shared_ptr<PlayerState> _playerState;
};

