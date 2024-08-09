#pragma once
#include"ImpFactory.h"
#include<memory>
class Scene
{
public:
	Scene(std::unique_ptr<ImpFactory> factory);
	~Scene() = default;
	void beginCreate();
	void setFactory(std::unique_ptr<ImpFactory>);
private:
	std::unique_ptr<ImpFactory> m_factory;
};

