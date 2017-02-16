#include "Person.h"

Person::Person(string name, string email)
{
	this->name = name;
	this->email = email;
}

string Person::getName() const 
{
	return name;
}

string Person::getEmail() const
{
	return email;
}