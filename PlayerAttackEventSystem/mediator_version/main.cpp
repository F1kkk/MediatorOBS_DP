#include "Player.h"
#include "Enemy.h"
#include "UI.h"
#include "SoundSystem.h"
#include "ScoreSystem.h"
#include <iostream>
int main() {
    EventMediator mediator;
    UI ui;
    SoundSystem sound;
    ScoreSystem score;
    mediator.addListener(&ui);
    mediator.addListener(&sound);
    mediator.addListener(&score);
    Player player(&mediator);
    Enemy enemy(40); // Adjusted to demonstrate score system
    std::cout << "Player attacks!" << std::endl;
    player.attack(enemy);
    std::cout << "\nPlayer attacks again!" << std::endl;
    player.attack(enemy);
    return 0;
}