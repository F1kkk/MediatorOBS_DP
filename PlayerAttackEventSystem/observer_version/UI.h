#ifndef UI_H
#define UI_H

#include "IObserver.h"

class UI : public IObserver {
public:
    void update(const std::string& event, int damage, int enemyHealth) override;
};

#endif // UI_H