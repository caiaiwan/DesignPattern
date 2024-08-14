#include "Player.h"
#include<iostream>
Player::Player(float hp, float atk, std::shared_ptr<BattleMediator> bm)
    :CharacterBase{ hp,atk }, m_battleManger{bm}
{
}

void Player::attack()
{
    std::cout << "Player attack!" << std::endl;
}

void Player::injuried(float atk)
{
    m_hp -= atk;
}