#pragma once
class IBehavior {
public:
	virtual void Execute() = 0;
	virtual ~IBehavior() = default;
};