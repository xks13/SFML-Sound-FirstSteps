#include "Dubbing.hpp"

bool Dubbing::loadFromFile(const std::string& fileName) {
    std::string path = "res/Dubbing/" + fileName + ".wav";
    bool res = _buffer.loadFromFile(path);
    _sound.setBuffer(_buffer);
    return res;
}