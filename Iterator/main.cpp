#include<iostream>
#include"CollectionIterator.h"
#include"MyCollection.h"
#include"Iterator.h"
void MyAlgorithm() {
	MyCollection<int> mc;
	Iterator<int> iter = mc.GetIterator();
	for (iter.first(); iter != iter.isDone(); iter.next()) {
		std::cout << iter.current() << std::endl;
	}
}
int main() {
	MyAlgorithm();
	return 0;
}
