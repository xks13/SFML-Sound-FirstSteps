#include "Player.hpp"

Player::Player() {
    _playerTexture.loadFromFile("res/Rest/Player.png");
    _playerSprite.setTexture(_playerTexture);
}
sf::Sprite& Player::getSprite() {
    return _playerSprite;
}

void Player::move(Dir direction) {
    
    switch (direction) {
     case Dir::up:
        _playerSprite.move(0, -_Speed); break;
     case Dir::down:
        _playerSprite.move(0, _Speed);  break;
     case Dir::right:
        _playerSprite.move(_Speed, 0);  break;
     case Dir::left:
        _playerSprite.move(-_Speed, 0); break;
    }
}