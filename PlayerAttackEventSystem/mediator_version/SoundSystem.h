#ifndef SOUND_SYSTEM_H
#define SOUND_SYSTEM_H
#include "EventMediator.h"
class SoundSystem : public IListener {
public:
    void onEvent(const std::string& event, const Enemy& enemy) override;
};
#endif