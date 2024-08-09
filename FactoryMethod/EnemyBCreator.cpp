#include "EnemyBCreator.h"

std::unique_ptr<EnemyBase> EnemyBCreator::createEnemy()
{
    return std::make_unique<EnemyB>();
}
