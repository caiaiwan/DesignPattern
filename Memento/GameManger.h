#pragma once
#include"GameStateMemento.h"
#include"GameState.h"
#include<vector>
class GameManger
{
public:
	GameManger(std::unique_ptr<GameState> gameState);
	void restore();
	void save();
	void setState(int level, std::shared_ptr<PlayerState> playerState);
	void showState() const;
private:
	std::unique_ptr<GameState> _gameState;
	std::vector<std::shared_ptr<GameStateMemento>> _gameMemento;
};

