#ifndef SOUND_SYSTEM_H
#define SOUND_SYSTEM_H

#include "IObserver.h"

class SoundSystem : public IObserver {
public:
    void update(const std::string& event, int damage, int enemyHealth) override;
};

#endif // SOUND_SYSTEM_H