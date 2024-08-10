#include "Director.h"

Director::Director(std::shared_ptr<Builder> build) :m_builder{build}
{
}

std::shared_ptr<Product> Director::Constructor()
{
	m_builder->buildPart1();
	m_builder->buildPart2();
	m_builder->buildPart3();
	return m_builder->getResult();

}
