#pragma once

#include <SFML/Graphics.hpp>

#include "AudioMenager.hpp"

class Application {
public:
    Application();
    void run();
private:
    void eventHandling();
    sf::RenderWindow _window;
    AudioMenager _menager;
};