#ifndef ENEMY_H
#define ENEMY_H

class Enemy {
private:
    int health;

public:
    Enemy(int initialHealth = 100);
    void takeDamage(int damage);
    int getHealth() const;
};

#endif // ENEMY_H