#include "Sound.hpp"

bool Sound::loadFromFile(const std::string& fileName) {
    std::string path = "res/Sound/" + fileName + ".wav";
    bool res = _buffer.loadFromFile(path);
    _sound.setBuffer(_buffer);
    return res;
}

void Sound::play() {
    _sound.play();
}

void Sound::pause() {
    _sound.pause();
}

void Sound::setVolume(const float& volume) {
    _sound.setVolume(volume);
}

float Sound::getVolume() const {
    return _sound.getVolume();
}