#include "UI.h"
#include <iostream>
void UI::onEvent(const std::string& event, const Enemy& enemy) {
    if (event == "attack") {
        std::cout << "Enemy HP Updated: " << enemy.getHealth() << std::endl;
    }
}