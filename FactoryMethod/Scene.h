#pragma once
#include<memory>
#include"EnemyCreator.h"
#include"EnemyBase.h"
#include<initializer_list>
class Scene
{
public:
	Scene(std::unique_ptr<EnemyCreator> emyCreator);
	~Scene() = default;
	void beginCreateEnemies(int nums);
	void setEnemyCreator(std::unique_ptr<EnemyCreator> newEnemyCreator);
private:
	std::unique_ptr<EnemyCreator> m_enemyCreator;
};

