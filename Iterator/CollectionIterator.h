#pragma once
#include"Iterator.h"
#include"MyCollection.h"
template<typename T>
class CollectionIterator : public Iterator<T> {
	MyCollection<T> mc;
public:
	CollectionIterator(const MyCollection<T>& c) : mc(c) {}
	void first() override {}
	void next() override {}
	bool isDone() const override {}
	T& current() override {}
};