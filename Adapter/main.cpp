#include<iostream>
#include"Adapter.h"
int main() {

	Adapter adapter{ std::make_unique<OldAdapter>() };
	adapter.requst();
	return 0;
}