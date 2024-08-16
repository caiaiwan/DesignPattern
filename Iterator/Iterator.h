#pragma once
template<typename T>
class Iterator {
public:
	virtual void first() = 0;
	virtual void next() = 0;
	virtual bool isDone() const = 0;
	virtual T& current() = 0;
};