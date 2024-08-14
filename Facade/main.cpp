#include<iostream>
#include"Facade.h"
int main() {

	Facade facade{ std::make_unique<Physics>(),std::make_unique<Renderer>(),std::make_shared<MediaPlayer>() };
	facade.renderWorld();
	facade.playSound();
	facade.initPhysics();
	return 0;

}