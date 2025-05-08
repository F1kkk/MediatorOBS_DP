#include "Player.h"
void Player::attack(Enemy& enemy) {
    enemy.takeDamage(20);
    mediator->triggerEvent("attack", enemy);
}