#pragma once

#include <SFML/Graphics.hpp>
#include "SoundMenager.hpp"

class Application {
public:
    Application();
    void run();
private:
    void eventHandling();
    sf::RenderWindow window;
    SoundMenager menager;
};