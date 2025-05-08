#ifndef PLAYER_H
#define PLAYER_H

#include "EventMediator.h"
#include "Enemy.h"

class Player {
private:
    EventMediator& mediator;
    Enemy* enemy;

public:
    Player(EventMediator& mediator, Enemy* enemy);
    void attack(int damage = 10);
};

#endif // PLAYER_H