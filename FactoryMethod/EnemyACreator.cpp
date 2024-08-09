#include "EnemyACreator.h"

std::unique_ptr<EnemyBase> EnemyACreator::createEnemy()
{
    return std::make_unique<EnemyA>();
}
