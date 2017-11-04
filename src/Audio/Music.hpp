#pragma once 

#include <SFML/Audio/Music.hpp>

#include "Audio.hpp"

class Music : public Audio {
public:
    bool loadFromFile(const std::string& fileName);
    void play();
    void pause();
    void setVolume(const float& volume);
    float getVolume() const;
    void setPitch(const float& pitch);
private:
    sf::Music _music;
};