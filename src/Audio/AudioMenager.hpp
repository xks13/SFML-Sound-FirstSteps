#pragma once

#include <map>

//#include "Audio.hpp"
#include "Sound.hpp"
#include "Music.hpp"
#include "Dubbing.hpp"

//main audio menager
class AudioMenager {
public:
    //Types of audio (dubbing, sound, music)
    enum class Type {
        dubbing, 
        sound, 
        music
    };
    //call audio obiect
    Audio* operator()(Type type, std::string fileName);
private:
    //returns pointer to correct class of audio
    Audio* getCorectType(Type type);
    //map of all active audio obiects
    std::map<std::string, Audio*> _active;
};