#pragma once 

#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

class Sound {
public:
    bool loadFromFile(std::string);
    void play();
    void pause();
private:
    sf::Sound _sound;
    sf::SoundBuffer _buffer;
};