#include<iostream>
#include"Scene.h"
#include"BusinessItem.h"
#include"Businessman.h"
#include"BusinessFactory.h"
#include"CharacterBase.h"
#include"ItemBase.h"
#include"ForgingFactory.h"
int main() {
	std::unique_ptr<ImpFactory> factory1{ std::make_unique<BusinessFactory>() };
	Scene scene(std::move(factory1));
	scene.beginCreate();
	std::unique_ptr<ImpFactory> factory2{ std::make_unique<ForgingFactory>() };
	scene.setFactory(std::move(factory2));
	scene.beginCreate();
	return 0;
}