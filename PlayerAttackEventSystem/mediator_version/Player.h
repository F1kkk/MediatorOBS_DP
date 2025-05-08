#ifndef PLAYER_H
#define PLAYER_H
#include "EventMediator.h"
class Player {
private:
    EventMediator* mediator;
public:
    Player(EventMediator* m) : mediator(m) {}
    void attack(Enemy& enemy);
};
#endif