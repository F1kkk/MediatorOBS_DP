#include "ScoreSystem.h"
#include <iostream>

void ScoreSystem::update(const std::string& event, int damage, int enemyHealth) {
    if (event == "attack" && enemyHealth <= 0) {
        std::cout << "Score Added if Enemy Dead" << std::endl;
    }
}