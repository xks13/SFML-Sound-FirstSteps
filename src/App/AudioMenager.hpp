#pragma once

#include "Audio.hpp"
#include "Sound.hpp"
#include "Music.hpp"

#include <map>

class AudioMenager {
public:
    enum class Type {
        dubbing, sound, music
    };
    Audio* operator()(Type type, std::string fileName);
private:
    Audio* getCorectType(Type type);
    std::map<std::string, Audio*> active;
};