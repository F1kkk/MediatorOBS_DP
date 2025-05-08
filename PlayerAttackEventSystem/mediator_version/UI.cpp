#include "UI.h"
#include <iostream>

void UI::operator()(int damage, int enemyHealth) {
    std::cout << "Enemy HP Updated: " << enemyHealth << std::endl;
}