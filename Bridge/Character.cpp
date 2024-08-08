#include "Character.h"

Character::Character(std::unique_ptr<IWeapon> weapon) :m_weapon{std::move(weapon)}
{
}


