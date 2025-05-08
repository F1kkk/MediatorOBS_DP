#include "Player.h"

Player::Player(Enemy* enemy) : enemy(enemy) {}

void Player::addObserver(IObserver* observer) {
    observers.push_back(observer);
}

void Player::removeObserver(IObserver* observer) {
    for (auto it = observers.begin(); it != observers.end(); ++it) {
        if (*it == observer) {
            observers.erase(it);
            break;
        }
    }
}

void Player::notify(const std::string& event, int damage, int enemyHealth) {
    for (IObserver* observer : observers) {
        observer->update(event, damage, enemyHealth);
    }
}

void Player::attack(int damage) {
    enemy->takeDamage(damage);
    notify("attack", damage, enemy->getHealth());
}

Player::~Player() {
    // Cleanup if needed
}