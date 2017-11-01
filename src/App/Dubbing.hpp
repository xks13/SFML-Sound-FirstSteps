#pragma once

#include "Sound.hpp"

class Dubbing : public Sound {
public:
    bool loadFromFile(const std::string& fileName) override;
};