#pragma once 

#include "Audio.hpp"
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

class Sound : public Audio {
public:
    bool loadFromFile(const std::string& fileName);
    void play();
    void pause();
    void setVolume(const float&);
    float getVolume() const;
private:
    sf::Sound _sound;
    sf::SoundBuffer _buffer;
};