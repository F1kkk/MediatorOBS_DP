#include "UI.h"
#include <iostream>

void UI::update(const std::string& event, int damage, int enemyHealth) {
    if (event == "attack") {
        std::cout << "Enemy HP Updated: " << enemyHealth << std::endl;
    }
}