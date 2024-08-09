#include "Scene.h"

Scene::Scene(std::unique_ptr<ImpFactory> factory) :m_factory{std::move(factory)}
{
}

void Scene::beginCreate()
{
	m_factory->createdCharatcer();
	m_factory->createdItem();
}

void Scene::setFactory(std::unique_ptr<ImpFactory> newFactory)
{
	m_factory.reset(newFactory.release());
}
