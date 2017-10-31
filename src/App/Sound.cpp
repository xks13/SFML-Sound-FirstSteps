#include "Sound.hpp"

bool Sound::loadFromFile(std::string path) {
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