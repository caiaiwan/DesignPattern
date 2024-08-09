#include "Scene.h"

Scene::Scene(std::unique_ptr<EnemyCreator> emyCreator) :m_enemyCreator{std::move(emyCreator)}
{
}

void Scene::beginCreateEnemies(int nums)
{
	for (int i = 0; i < nums; ++i) {
		std::unique_ptr<EnemyBase> tempEnemy{ m_enemyCreator->createEnemy() };
		tempEnemy->showEnemy();
	}
}

void Scene::setEnemyCreator(std::unique_ptr<EnemyCreator> newEnemyCreator)
{
	m_enemyCreator = { std::move(newEnemyCreator) };
}
