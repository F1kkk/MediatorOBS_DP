#ifndef EVENT_MEDIATOR_H
#define EVENT_MEDIATOR_H
#include <vector>
#include <string>
#include "Enemy.h"
class IListener {
public:
    virtual void onEvent(const std::string& event, const Enemy& enemy) = 0;
    virtual ~IListener() = default;
};
class EventMediator {
private:
    std::vector<IListener*> listeners;
public:
    void addListener(IListener* listener);
    void triggerEvent(const std::string& event, const Enemy& enemy);
};
#endif