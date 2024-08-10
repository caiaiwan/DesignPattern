#pragma once
#include"SplinterBase.h"
#include<string>
#include<memory>
class Slime :public SplinterBase
{
public:
	Slime(float hp ,std::string name);
	Slime(const Slime& otherSlime);
	~Slime() = default;
	void split() override;
	std::shared_ptr<SplinterBase> clone() override;
	void showState() const override;
private:
	
	float m_hp;
	int m_currentState;
	std::string m_name;
	
};

