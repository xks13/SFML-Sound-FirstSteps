#pragma once 

#include "Audio.hpp"
#include <SFML/Audio/Music.hpp>

class Music : public Audio {
public:
    bool loadFromFile(const std::string& fileName);
    void play();
    void pause();
    void setVolume(const float& volume);
    float getVolume() const;
private:
    sf::Music _music;
};