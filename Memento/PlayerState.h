#pragma once
#include<string>
class PlayerState
{
public:
	PlayerState(int hp , int atk , const std::string& name);
	void showInfo() const ;
	~PlayerState() = default;
private:
	int m_hp;
	int m_atk;
	std::string m_name;
};

