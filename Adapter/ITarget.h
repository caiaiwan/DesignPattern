#pragma once
class ITarget
{
public:
	virtual void requst() = 0;
	virtual ~ITarget() = default;
};

