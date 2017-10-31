#pragma once 

#include <SFML/Audio/Music.hpp>

class Music {
public:
    bool loadFromFile(std::string path);
    void play();
    void pause();
private:
    sf::Music _music;
};