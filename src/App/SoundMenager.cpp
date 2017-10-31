#include "SoundMenager.hpp"

#include <SFML/Audio.hpp>
#include <iostream>

sf::Sound sound;
sf::SoundBuffer buffer;

sf::Music music;

SoundMenager::SoundMenager() {
	
	if (!music.openFromFile("res/Szczur Rozpierdalacz.ogg")) {
		std::cout << "There is not Szczur Rozpierdalacz.ogg in res folder!" << std::endl;
	}
	
	if (!buffer.loadFromFile("res/beep.wav")) {
		std::cout << "There is not beep.wav in res folder!" << std::endl;
		return;
	}

	sound.setBuffer(buffer);
}

void SoundMenager::playSound() {
	sound.play(); 
}

void SoundMenager::pauseSound() {
	sound.pause(); 
}

void SoundMenager::playMusic() {
	music.play();
}

void SoundMenager::pauseMusic() {
	music.pause();
}