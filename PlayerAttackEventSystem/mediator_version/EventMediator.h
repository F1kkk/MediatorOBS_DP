#ifndef EVENT_MEDIATOR_H
#define EVENT_MEDIATOR_H

#include <vector>
#include <functional>
#include <string>

class EventMediator {
private:
    std::vector<std::function<void(int, int)>> listeners;

public:
    void registerListener(const std::function<void(int, int)>& listener);
    void triggerEvent(const std::string& event, int damage, int enemyHealth);
};

#endif // EVENT_MEDIATOR_H