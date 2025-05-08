#include "EventMediator.h"

void EventMediator::registerListener(const std::function<void(int, int)>& listener) {
    listeners.push_back(listener);
}

void EventMediator::triggerEvent(const std::string& event, int damage, int enemyHealth) {
    if (event == "attack") {
        for (const auto& listener : listeners) {
            listener(damage, enemyHealth);
        }
    }
}