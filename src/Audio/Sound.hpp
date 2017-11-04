#pragma once 

#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>

#include "Audio.hpp"

class Sound : public Audio {
public:
    bool loadFromFile(const std::string& fileName);
    void play();
    void pause();
    void setVolume(const float& volume);
    float getVolume() const;
    void setPitch(const float& pitch);
protected:
    sf::Sound _sound;
    sf::SoundBuffer _buffer;
};