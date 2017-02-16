#include "Person.h"
#include "Student.h"
#include <string>

Student::Student(string name, string email, int regNr): Person(name, email) 
{
	this->regNr = regNr;
}

int Student::getRegNr() const 
{
	return regNr;
}