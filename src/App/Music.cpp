#include "Music.hpp"

bool Music::loadFromFile(const std::string& fileName) {
    std::string path = "res/Music/" + fileName + ".wav";
    return _music.openFromFile(path);
}

void Music::play() {
    _music.play();
}

void Music::pause() {
    _music.pause();
}

void Music::setVolume(const float& volume) {
    _music.setVolume(volume);
}

float Music::getVolume() const {
    return _music.getVolume();
}