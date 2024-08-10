#include "Scene.h"
#include<iostream>
Scene::Scene(std::shared_ptr<SplinterBase> sb) :m_sb{sb}
{
}

void Scene::beginSplit()
{
	std::cout << "Scene begin Split Splinter: " << std::endl;
	m_sb->showState();
	m_sb->split();
	std::shared_ptr<SplinterBase> sp1{ m_sb->clone() };
	m_sb->showState();
	sp1->showState();

}


