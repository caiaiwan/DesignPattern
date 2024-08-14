#include "Adapter.h"

Adapter::Adapter(std::unique_ptr<OldAdapter> adaptee) :m_adaptee{std::move(adaptee)}
{
}

void Adapter::requst()
{
	m_adaptee->specificRequst();
}
