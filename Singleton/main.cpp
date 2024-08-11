#include"GameWorld.h"

int main() {

	auto gw{ GameWorld::singleton()};
	gw->showGameWorld();
	delete gw;
	return 0;
}