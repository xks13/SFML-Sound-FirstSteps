#include "Application.hpp"
#include "SoundMenager.hpp"

#include <SFML/Audio.hpp>

Application::Application() {
    window.create(sf::VideoMode(1280, 720), "Window");
}

void Application::run() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.key.code == sf::Keyboard::A)
                menager.play();
            if (event.key.code == sf::Keyboard::Space)
                menager.pause();
        }
        window.clear();
        window.display();
    }
}

void Application::eventHandling() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}