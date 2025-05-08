#ifndef PLAYER_H
#define PLAYER_H

#include "IObserver.h"
#include "Enemy.h"
#include <vector>

class Player {
private:
    std::vector<IObserver*> observers;
    Enemy* enemy;

public:
    Player(Enemy* enemy);
    void addObserver(IObserver* observer);
    void removeObserver(IObserver* observer);
    void notify(const std::string& event, int damage, int enemyHealth);
    void attack(int damage = 10);
    ~Player();
};

#endif // PLAYER_H