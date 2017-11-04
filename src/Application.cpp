#include "Application.hpp"

Application::Application() {
    _window.create(sf::VideoMode(1280, 720), "Window");
}

void Application::run() {
    _menager(AudioMenager::Type::music, "Szczur Rozpierdalacz")->play();
    while (_window.isOpen()) {
        eventHandling();
        _window.clear();
        draw();
        _window.display();
    }
}

void Application::eventHandling() {
    sf::Event event;

    while (_window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            _window.close();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
            _menager(AudioMenager::Type::music, "Szczur Rozpierdalacz")->setPitch(1.5);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
            _menager(AudioMenager::Type::music, "Szczur Rozpierdalacz")->setPitch(1);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        _player.move(Player::Dir::up);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        _player.move(Player::Dir::left);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        _player.move(Player::Dir::down);
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        _player.move(Player::Dir::right);
}

void Application::draw() {
    _window.draw(_player.getSprite());
}