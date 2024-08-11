#include<iostream>
#include"TreeFlyweightFactory.h"
int main() {
	TreeFlyweightFactory treeFactory;
	auto tree1{ treeFactory.getTreeType("SpringTree") };
	tree1->showInfo();
	auto tree2{ treeFactory.getTreeType("SpringTree") };
	tree2->showInfo();
	auto tree3{ treeFactory.getTreeType("SummerTree") };
	tree3->showInfo();
	std::cout << "SpringTree nums :" << tree1.use_count()<<std::endl;
	std::cout << "SummerTree nums : " << tree3.use_count()<<std::endl; 
	return 0;
}