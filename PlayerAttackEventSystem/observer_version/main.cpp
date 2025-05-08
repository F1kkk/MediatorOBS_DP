#include "Player.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include "Enemy.h"
#include <iostream>

int main() {
    std::cout << "=== Observer Pattern Demo ===\n";
    Enemy enemy(100);
    Player player(&enemy);
    UI ui;
    SoundSystem sound;
    ScoreSystem score;

    player.addObserver(&ui);
    player.addObserver(&sound);
    player.addObserver(&score);

    player.attack(30);
    player.attack(80); // Enemy should die here

    return 0;
}