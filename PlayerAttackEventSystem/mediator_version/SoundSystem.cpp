#include "SoundSystem.h"
#include <iostream>
void SoundSystem::onEvent(const std::string& event, const Enemy& enemy) {
    if (event == "attack") {
        std::cout << "Play Attack Sound" << std::endl;
    }
}