#pragma once
class CharacterBase
{
public:
	CharacterBase(float hp, float atk);
	virtual void attack() = 0;
	virtual void injuried(float atk) = 0;
	virtual bool characterDied();
	float getHp() const;
	float getAtk() const;
	virtual ~CharacterBase() = default;
protected:
	float m_hp;
	float m_atk;
private:
	bool check();
};

