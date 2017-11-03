#pragma once

#include <SFML/Graphics.hpp>

#include "Audio/AudioMenager.hpp"
#include "Demo/Player.hpp"

class Application {
public:
    Application();
    void run();
private:
    void eventHandling();
    void draw();
    sf::RenderWindow _window;
    AudioMenager _menager;
    Player _player;
};