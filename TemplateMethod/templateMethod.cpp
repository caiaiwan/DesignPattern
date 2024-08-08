#include<iostream>
#include"applicator.h"
#include"user.h"
int main() {
	
	Applicator* app{ new User() };
	app->Run();
	delete app;
	app = nullptr;
	return 0;

}
