#ifndef ENEMY_H
#define ENEMY_H
class Enemy {
private:
    int health;
public:
    Enemy(int hp = 100) : health(hp) {}
    void takeDamage(int damage) { health -= damage; }
    int getHealth() const { return health; }
    bool isDead() const { return health <= 0; }
};
#endif