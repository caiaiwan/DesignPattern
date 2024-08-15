#include<iostream>
#include"GameManger.h"
int main() {
	auto playstate1{ std::make_shared<PlayerState>(200,25,"≤Ã–Ï¿§") };
	auto playstate2{ std::make_shared<PlayerState>(150,15,"GGBond") };

	auto gameState1{ std::make_unique<GameState>(1,playstate1) };

	GameManger gm{std::move(gameState1)};
	gm.showState();
	gm.save();
	gm.setState(2,playstate2);
	gm.showState();
	gm.restore();
	gm.showState();

	return 0;

}