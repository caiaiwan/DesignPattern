#include "Player.h"

Player::Player(std::unique_ptr<IWeapon> weapon):Character(std::move(weapon))
{
}

void Player::useGun()
{
	m_weapon->shoot();
}
