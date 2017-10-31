#include "Application.hpp"

Application::Application() {
    window.create(sf::VideoMode(1280, 720), "Window");
}

void Application::run() {
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }
}