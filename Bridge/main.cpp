#include<iostream>
#include"Player.h"
#include"Gun_AK47.h"
#include"Gun_AWP.h"
#include<memory>
#include<iostream>
int main() {

	std::unique_ptr<IWeapon> weapon1{ std::make_unique<Gun_AK47>()};
	std::unique_ptr<IWeapon> weapon2{ std::make_unique<Gun_AWP>() };
	
	Player p1{std::move(weapon1)};
	std::cout << "Player1 attack state: ";
	p1.useGun();
	Player p2{ std::move(weapon2) };
	std::cout << "Player2 attack state: ";
	p2.useGun();

	return 0;
}
