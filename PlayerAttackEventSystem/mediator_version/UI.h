#ifndef UI_H
#define UI_H
#include "EventMediator.h"
class UI : public IListener {
public:
    void onEvent(const std::string& event, const Enemy& enemy) override;
};
#endif