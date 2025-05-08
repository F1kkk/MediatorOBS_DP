#include "SoundSystem.h"
#include <iostream>

void SoundSystem::update(const std::string& event, int damage, int enemyHealth) {
    if (event == "attack") {
        std::cout << "Play Attack Sound" << std::endl;
    }
}