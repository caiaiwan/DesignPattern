#include "Context.h"

Context::Context(Strategy* strategy) :m_strategy{strategy}
{

}

Context::~Context()
{
}

void Context::showState()
{
	m_strategy->playerState();
}

void Context::setStragegy(Strategy* strategy)
{
	m_strategy = strategy;
}
