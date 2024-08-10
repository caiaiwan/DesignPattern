#pragma once
#include<memory>
class SplinterBase
{
public:
	virtual void split() = 0;
	virtual std::shared_ptr<SplinterBase> clone() = 0;
	virtual void showState() const = 0;
	virtual ~SplinterBase() = default;
};

