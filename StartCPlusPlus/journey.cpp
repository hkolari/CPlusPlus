#include "journey.h"

Journey::Journey() {
	this->duration = 0;
	this->speed = 0;
}

Journey::Journey(int duration, int speed) {
	// fix
}

Journey::~Journey() {
}

void Journey::setDuration(int duration) {
	// fix
}

void Journey::setSpeed(int speed) {
	// fix
}

int Journey::getDuration() const {
	return 0; // fix
}

int Journey::getSpeed() const {
	return 0; // fix
}

int Journey::getDistance() const {
	return 0; // fix
}

string Journey::getInfo() const {
	string res = "";
	res += "Journey info: ";
	res += "Duration: ";
	res += to_string(this->duration);
	res += " seconds, ";
	res += "Speed: ";
	res += to_string(this->speed);
	res += " m/s, ";
	res += "Distance: ";
	res += to_string(this->getDistance());
	res += " m.";
	return res;
}
