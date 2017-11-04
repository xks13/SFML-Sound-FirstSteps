#pragma once

#include <string>

class Audio {
public:
    virtual bool loadFromFile(const std::string&) = 0;
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void setVolume(const float&) = 0;
    virtual float getVolume() const = 0;
    virtual void setPitch(const float&) = 0;
};