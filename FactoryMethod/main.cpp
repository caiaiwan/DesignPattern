#include<iostream>
#include"EnemyBase.h"
#include"EnemyA.h"
#include"EnemyB.h"
#include"EnemyACreator.h"
#include"EnemyBCreator.h"
#include"EnemyCreator.h"
#include<memory>
#include"Scene.h"
int main() {
	
	std::unique_ptr<EnemyACreator> enemyACreator{std::make_unique<EnemyACreator>()};
	std::unique_ptr<EnemyBCreator> enemyBCreator{ std::make_unique<EnemyBCreator>() };
	Scene scene{ std::move(enemyACreator) };
	scene.beginCreateEnemies(3);
	scene.setEnemyCreator(std::move(enemyBCreator));
	scene.beginCreateEnemies(2);
	return 0;

}