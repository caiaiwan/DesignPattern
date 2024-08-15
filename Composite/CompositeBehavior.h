#pragma once
#include "IBehavior.h"
#include<memory>
#include<list>
class CompositeBehavior : public IBehavior
{
	// Í¨¹ý IBehavior ¼Ì³Ð
public:
	void Execute() override;
	void add(std::shared_ptr<IBehavior> newNode);
	void remove(std::shared_ptr<IBehavior> targetNode);
private:
	std::list<std::shared_ptr<IBehavior>> _behavior;
};

