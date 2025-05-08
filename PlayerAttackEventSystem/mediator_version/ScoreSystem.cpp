#include "ScoreSystem.h"
#include <iostream>
void ScoreSystem::onEvent(const std::string& event, const Enemy& enemy) {
    if (event == "attack" && enemy.isDead()) {
        score += 10;
        std::cout << "Score Added: " << score << std::endl;
    }
}