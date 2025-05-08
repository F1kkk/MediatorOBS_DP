#include "Enemy.h"

Enemy::Enemy(int initialHealth) : health(initialHealth) {}

void Enemy::takeDamage(int damage) {
    health -= damage;
}

int Enemy::getHealth() const {
    return health;
}