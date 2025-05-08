#include "Player.h"

Player::Player(EventMediator& mediator, Enemy* enemy) : mediator(mediator), enemy(enemy) {}

void Player::attack(int damage) {
    enemy->takeDamage(damage);
    mediator.triggerEvent("attack", damage, enemy->getHealth());
}