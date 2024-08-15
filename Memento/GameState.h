#pragma once
#include"PlayerState.h"
#include"GameStateMemento.h"
#include<memory>
class GameState
{
public:
	GameState(int level , std::shared_ptr<PlayerState> playerState);
	std::shared_ptr<GameStateMemento> createMemento();
	void restoreState(std::shared_ptr<GameStateMemento> memento);
	std::pair<int, std::shared_ptr<PlayerState>> getInfo() const;
	void setState(int level, std::shared_ptr<PlayerState> playerState);
	void showState() const;
private:
	int m_level;
	std::shared_ptr<PlayerState> _playerState;
};

