#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <string>

class IObserver {
public:
    virtual void update(const std::string& event, int damage, int enemyHealth) = 0;
    virtual ~IObserver() = default;
};

#endif // IOBSERVER_H