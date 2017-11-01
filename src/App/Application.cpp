#include "Application.hpp"

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
        if (event.key.code == sf::Keyboard::S)
            _menager(AudioMenager::Type::sound, "beep")->play();
        if (event.key.code == sf::Keyboard::D)
            _menager(AudioMenager::Type::dubbing, "Pora umierac")->play();
        if (event.key.code == sf::Keyboard::A)
            _menager(AudioMenager::Type::music, "Szczur Rozpierdalacz")->play();
        if (event.key.code == sf::Keyboard::Space)
            _menager(AudioMenager::Type::music, "Szczur Rozpierdalacz")->pause();
    }
}