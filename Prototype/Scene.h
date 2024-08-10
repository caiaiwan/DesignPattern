#pragma once
#include"SplinterBase.h"
#include"Slime.h"
#include<memory>
class Scene
{
public:
	Scene(std::shared_ptr<SplinterBase> sb);
	~Scene() = default;
	void beginSplit();
private:
	std::shared_ptr<SplinterBase> m_sb;
};

