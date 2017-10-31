#pragma once
 
#include <SFML/Audio.hpp>

class SoundMenager {
public:
    SoundMenager();
    void playSound();
    void pauseSound();
    void playMusic();
    void pauseMusic();
private:
    sf::Sound _sound;
    sf::SoundBuffer _buffer;
    sf::Music _music;
};