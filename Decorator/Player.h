#pragma once
#include<array>
#include"Trapping.h"
#include<string>
class Player
{
public:
	Player() = default;
	Player(std::string playerName);
	void showTrappings() const ;
	void equipClothes(Trapping* clothes);
	~Player() = default;
private:
	std::array<Trapping*, 5> m_clothesArr;
	std::string m_name;
	int m_currentClothesNums;
	bool check();
};

