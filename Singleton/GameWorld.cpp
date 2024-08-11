#include "GameWorld.h"
#include<iostream>
GameWorld* GameWorld::singleton()
{
    if (m_gw == nullptr) {
        m_gw = new GameWorld;
    }
    return m_gw;
}

GameWorld* GameWorld::m_gw = nullptr;

void GameWorld::showGameWorld()
{
    std::cout << "Welcome to Game World!" << std::endl;
}
