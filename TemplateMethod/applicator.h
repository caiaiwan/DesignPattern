#pragma once
class Applicator
{
public:
	Applicator() = default;
	void Run();
	virtual ~Applicator();
protected:
	void step1();
	bool step2();
	void step3();
	virtual void step4() = 0;
	virtual void step5() = 0;
};

