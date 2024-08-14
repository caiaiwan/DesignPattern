#include<iostream>
#include"ProxySubject.h"
int main() {

	ProxySubject pro{ std::make_unique<RealSubject>() };
	pro.requst();
	return 0;
}