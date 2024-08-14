#include<iostream>
#include<memory>
#include"Character.h"

int main() {

	auto idleState{ std::make_shared<IdleState>() };
	auto fallState{ std::make_shared<FallState>() };
	auto jumpState{ std::make_shared<JumpState>() };

	Character player{ idleState };
	player.changeState(jumpState);
	player.updateState();
	player.changeState(fallState);
	player.updateState();
	player.changeState(idleState);
	player.updateState();

	return 0;

}