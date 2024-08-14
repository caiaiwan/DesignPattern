#include "ProxySubject.h"
#include<iostream>
ProxySubject::ProxySubject(std::unique_ptr<RealSubject> realsub) :m_rsub{std::move(realsub)}
{
}

void ProxySubject::beforeRequst()
{
	std::cout << "The add new function before requst..." << std::endl;
}

void ProxySubject::requst()
{
	beforeRequst();
	m_rsub->requst();
	afterRequst();
}

void ProxySubject::afterRequst()
{
	std::cout << "The add new function after requst..." << std::endl;
}
