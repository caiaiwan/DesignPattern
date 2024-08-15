#include "GameManger.h"

GameManger::GameManger(std::unique_ptr<GameState> gameState)
	:_gameState{std::move(gameState)}
{
}

void GameManger::restore()
{
	if (!_gameMemento.empty()) {
		auto preState{ _gameMemento.back()};
		_gameState->restoreState(preState);
		_gameMemento.pop_back();
	}
}

void GameManger::save()
{
	_gameMemento.push_back(_gameState->createMemento());
}

void GameManger::setState(int level , std::shared_ptr<PlayerState> playerState)
{
	_gameState->setState(level, playerState);
}

void GameManger::showState() const
{
	_gameState->showState();
}
