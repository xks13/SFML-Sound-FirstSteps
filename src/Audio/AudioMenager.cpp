#include "AudioMenager.hpp"


Audio* AudioMenager::operator()(Type type, std::string fileName) {
	if (!_active.count(fileName)) {
		_active[fileName] = getCorectType(type);
		_active[fileName]->loadFromFile(fileName);
	}
	return _active[fileName];
}

Audio* AudioMenager::getCorectType(Type type) {
	switch (type) {
		case Type::dubbing:
			return new Dubbing;
		case Type::sound:
			return new Sound;
		case Type::music:
			return new Music;
	};
}