#include "CompositeBehavior.h"

void CompositeBehavior::Execute()
{
	for (auto& element : _behavior) {
		element->Execute();
	}
}

void CompositeBehavior::add(std::shared_ptr<IBehavior> newNode)
{
	_behavior.push_back(newNode);
}

void CompositeBehavior::remove(std::shared_ptr<IBehavior> targetNode)
{
	_behavior.remove(targetNode);
}
