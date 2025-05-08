#include "ScoreSystem.h"
#include <iostream>

void ScoreSystem::operator()(int damage, int enemyHealth) {
    if (enemyHealth <= 0) {
        std::cout << "Score Added if Enemy Dead" << std::endl;
    }
}