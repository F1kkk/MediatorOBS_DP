#include "Player.h"
#include "EventMediator.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

int main() {
    std::cout << "=== Mediator Pattern Demo ===\n";
    EventMediator mediator;
    Enemy enemy(100);
    Player player(mediator, &enemy);
    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    mediator.registerListener([&ui](int damage, int enemyHealth) { ui(damage, enemyHealth); });
    mediator.registerListener([&sound](int damage, int enemyHealth) { sound(damage, enemyHealth); });
    mediator.registerListener([&score](int damage, int enemyHealth) { score(damage, enemyHealth); });

    player.attack(30);
    player.attack(80); // Enemy should die here

    return 0;
}