#include<iostream>
#include"Strategy.h"
#include"VertigoState.h"
#include"ToxicState.h"
#include"Context.h"

int main() {
	Strategy* strategy{ new ToxicState };
	Context* context{ new Context{strategy} };
	strategy = new ToxicState;
	context->showState();
	delete strategy;
	strategy = new VertigoState;
	//delete context;
	//context = new Context{ strategy };
	context->setStragegy(strategy);
	context->showState();
	delete strategy;
	delete context;
	return 0;
}