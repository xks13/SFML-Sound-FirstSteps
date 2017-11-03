#pragma once

#include <SFML/Graphics.hpp>

class Player {
public:
    enum class Dir {
        up,
        down,
        right,
        left
    };
    Player();
    sf::Sprite& getSprite();
    void move(Dir direction);
private:
    sf::Texture _playerTexture;
    sf::Sprite _playerSprite;
    const float _Speed = 0.05;
};