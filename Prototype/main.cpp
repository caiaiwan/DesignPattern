#include<iostream>
#include"Scene.h"
#include"Slime.h"
#include"SplinterBase.h"

int main() {
	std::shared_ptr<SplinterBase> sb{ std::make_shared<Slime>(100,"Slime")};
	Scene sc{ sb };
	sc.beginSplit();
	return 0;
}