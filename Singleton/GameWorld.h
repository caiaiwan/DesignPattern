#pragma once
#include<memory>
class GameWorld
{
public:
	static GameWorld* singleton();
	void showGameWorld();
	static GameWorld* m_gw;
protected:
	GameWorld() = default;
	GameWorld(const GameWorld& gw) = default;
};

