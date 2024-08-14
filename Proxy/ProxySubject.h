#pragma once
#include"ISubject.h"
#include"RealSubject.h"
#include<memory>
class ProxySubject : public ISubject
{
public:
	ProxySubject(std::unique_ptr<RealSubject> realsub);
	void beforeRequst();
	void requst() override;
	void afterRequst();
private:
	std::unique_ptr<RealSubject> m_rsub;
};

