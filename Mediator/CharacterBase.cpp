#include "CharacterBase.h"

CharacterBase::CharacterBase(float hp, float atk)
	:m_hp{ hp }, m_atk{atk}
{
}

bool CharacterBase::characterDied()
{
	return check();
}

float CharacterBase::getHp() const
{
	return {m_hp};
}

float CharacterBase::getAtk() const
{
	return {m_atk};
}

bool CharacterBase::check()
{
	return getHp() <= 0 ? true : false;
}
