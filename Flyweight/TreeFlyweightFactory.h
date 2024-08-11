#pragma once
#include<map>
#include<string>
#include"TreeFlyweight.h"
#include<memory>
class TreeFlyweightFactory
{
public:
	std::shared_ptr<TreeFlyweight> getTreeType(const std::string& key);
private:
	std::map<std::string, std::shared_ptr<TreeFlyweight>> m_trees;
};

