#include "EventMediator.h"
void EventMediator::addListener(IListener* listener) {
    listeners.push_back(listener);
}
void EventMediator::triggerEvent(const std::string& event, const Enemy& enemy) {
    for (IListener* listener : listeners) {
        listener->onEvent(event, enemy);
    }
}