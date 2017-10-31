#pragma once

#include "Music.hpp"
#include "Sound.hpp"

class SoundMenager {
public:
    SoundMenager();
    void playSound();
    void pauseSound();
    void playMusic();
    void pauseMusic();
private:
    Sound _sound;
    Music _music;
};