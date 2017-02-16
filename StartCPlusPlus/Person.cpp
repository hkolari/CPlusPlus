#include "Person.h"

Person::Person(string name, string mail)
{
	this->name = name;
	this->mail = mail;
}

Person::Person()
{
}

Person::Person(const Person& origObj)
{
	this->name = origObj.name;
	this->mail = origObj.mail;
}

Person& Person::operator=(const Person& origObj)
{
	this->name = origObj.name;
	this->mail = origObj.mail;
	return *this;
}

Person::~Person()
{
}

string Person::getName() const
{
	return this->name;
}

string Person::getMail() const
{
	return this->mail;
}

string Person::toString() const
{
	return "Namn: " + this->name + "\nMail: " + this->mail + "\n" + toStringSpecific() + "\n";
}