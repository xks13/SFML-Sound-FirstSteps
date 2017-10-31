#include "SoundMenager.hpp"

#include <SFML/Audio.hpp>
#include <iostream>

sf::Sound sound;
sf::SoundBuffer buffer;

SoundMenager::SoundMenager() {
	if(!buffer.loadFromFile("res/Szczur_Rozpierdalacz.wav")) {
		std::cout << "There is not Szczur_Rozpierdalacz.wav in res folder!" << std::endl;
		return;
	}

	sound.setBuffer(buffer);
}

void SoundMenager::play() {
	sound.play(); 
}

void SoundMenager::pause() {
	sound.pause(); 
}