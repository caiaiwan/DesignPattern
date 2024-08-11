#include "TreeFlyweightFactory.h"

std::shared_ptr<TreeFlyweight> TreeFlyweightFactory::getTreeType(const std::string& key)
{
	auto it{ m_trees.find(key) };
	if (it == m_trees.end()) {
		m_trees[key] = { std::make_shared<TreeFlyweight>(key)};
	}
	return m_trees[key];
}
