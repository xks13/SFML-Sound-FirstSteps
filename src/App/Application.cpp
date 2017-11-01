#include "Application.hpp"
#include "SoundMenager.hpp"

Application::Application() {
    _window.create(sf::VideoMode(1280, 720), "Window");
}

void Application::run() {
    while (_window.isOpen()) {
        eventHandling();
        _window.clear();
        _window.display();
    }
}

void Application::eventHandling() {
    sf::Event event;
    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();
        if (event.key.code == sf::Keyboard::P)
            (_menager(SoundMenager::Type::sound, "beep"))->play();
        if (event.key.code == sf::Keyboard::A)
            (_menager(SoundMenager::Type::music, "Szczur Rozpierdalacz"))->play();
        if (event.key.code == sf::Keyboard::Space)
            (_menager(SoundMenager::Type::music, "Szczur Rozpierdalacz"))->pause();
    }
}