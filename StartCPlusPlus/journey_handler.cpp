#include "journey_handler.h"
#include <limits>

JourneyHandler::JourneyHandler() {
	this->owner = "unknown";
	this->capacity = 5;
	this->nr_of_journeys = 0;
	this->journeys = new Journey*[this->capacity];

	for(int i = 0; i < this->capacity; i++)
		this->journeys[i] = nullptr;
}

JourneyHandler::JourneyHandler(string owner) {
	// fix
}

JourneyHandler::~JourneyHandler() {
	// take care of memory leaks
}

void JourneyHandler::addJourney(int duration, int speed) {
	// expand pointer array if necessary
	if(this->capacity == this->nr_of_journeys) {
		//insert code for expansion
	}

	// add the journey
}

int JourneyHandler::getNrOfJourneys() const {
	return 0; // fix
}

string JourneyHandler::getLongestJourneyInfo() const {
	// find the longest (distance) journey and return its getInfo().
}

string JourneyHandler::getShortestJourneyInfo() const {
	// find the shortest (distance) journey and return its getInfo().
}

string JourneyHandler::getJourneyInfoAt(int index) const {
	return this->journeys[index]->getInfo();
}
