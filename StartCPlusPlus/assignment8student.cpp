#include "assignment8.h"

Student::Student() {
	name = "EMPTY";
	programme = "EMPTY";
	phoneNumber = "EMPTY";
}
Student::Student(string name, string programme, string phoneNumber) {
	this->name = name;
	this->programme = programme;
	this->phoneNumber = phoneNumber;
}

string Student::getName() {
	return name;
}
string Student::getProgramme() {
	return programme;
}
string Student::getPhoneNumber() {
	return phoneNumber;
}

void Student::setName(string name) {
	this->name = name;
}
void Student::setProgramme(string programme) {
	this->programme = programme;
}
void Student::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}
string Student::toString() {
	return name + " | " + programme + " | " + phoneNumber;
}