#include "SoundMenager.hpp"


Audio* SoundMenager::operator()(Type type, std::string fileName) {
	if (!active.count(fileName)) {
		active[fileName] = getCorectType(type);
		active[fileName]->loadFromFile(fileName);
	}
	return active[fileName];
}

Audio* SoundMenager::getCorectType(Type type) {
	switch (type) {
		case Type::dubbing:
		case Type::sound:
			return new Sound;
		case Type::music:
			return new Music;
	};
}