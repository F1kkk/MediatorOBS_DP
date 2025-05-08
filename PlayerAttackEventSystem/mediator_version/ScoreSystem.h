#ifndef SCORE_SYSTEM_H
#define SCORE_SYSTEM_H
#include "EventMediator.h"
class ScoreSystem : public IListener {
private:
    int score;
public:
    ScoreSystem() : score(0) {}
    void onEvent(const std::string& event, const Enemy& enemy) override;
};
#endif