#ifndef SCORE_SYSTEM_H
#define SCORE_SYSTEM_H

#include "IObserver.h"

class ScoreSystem : public IObserver {
public:
    void update(const std::string& event, int damage, int enemyHealth) override;
};

#endif // SCORE_SYSTEM_H