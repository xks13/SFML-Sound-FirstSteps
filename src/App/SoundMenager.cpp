#include "SoundMenager.hpp"

#include <iostream>
#include <SFML/Audio.hpp>

SoundMenager::SoundMenager() {

	if (!_music.openFromFile("res/Szczur Rozpierdalacz.ogg")) {
		std::cout << "There is not Szczur Rozpierdalacz.ogg in res folder!" << std::endl;
	}
	
	if (!_buffer.loadFromFile("res/beep.wav")) {
		std::cout << "There is not beep.wav in res folder!" << std::endl;
		return;
	}

	_sound.setBuffer(_buffer);
}

void SoundMenager::playSound() {
	_sound.play(); 
}

void SoundMenager::pauseSound() {
	_sound.pause(); 
}

void SoundMenager::playMusic() {
	_music.play();
}

void SoundMenager::pauseMusic() {
	_music.pause();
}