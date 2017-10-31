#include "Music.hpp"

bool Music::loadFromFile(std::string path) {
    return _music.openFromFile(path);
}

void Music::play() {
    _music.play();
}

void Music::pause() {
    _music.pause();
}