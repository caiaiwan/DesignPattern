#include<iostream>
#include"CompositeBehavior.h"
#include"LeafBehavior.h"
#include<memory>
int main() {

	auto root{ std::make_shared<CompositeBehavior>() };
	auto treeNode2{ std::make_shared<CompositeBehavior>() };
	auto treeNode3{ std::make_shared<CompositeBehavior>() };
	auto treeNode1{ std::make_shared<CompositeBehavior>() };
	auto leafNode1{ std::make_shared<LeafBehavior>() };
	auto leafNode2{ std::make_shared<LeafBehavior>() };
	root->add(treeNode1);
	treeNode1->add(treeNode2);
	treeNode2->add(leafNode1);
	root->add(treeNode3);
	treeNode3->add(leafNode2);
	root->Execute();

	return 0;
}