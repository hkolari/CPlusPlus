#include "Friend.h"

Friend::Friend()
{
	this->name = "John Doe";
	this->phoneNr = "1";
	this->eMail = "unknown@unknown.se";
	this->age = 1;
}

Friend::Friend(const string & name, const string & phoneNr, const string & eMail, int age)
{
	this->name = name;
	this->phoneNr = phoneNr;
	this->eMail = eMail;
	this->age = 1;
	this->setAge(age);
}

// Använd Friend::
void Friend::setName(const string & name)
{
	this->name = name;
}

void Friend::setPhoneNr(const string & newPhoneNr)
{
	this->phoneNr = newPhoneNr;
}

void Friend::setEmail(const string & eMail)
{
	this->eMail = eMail;
}

bool Friend::setAge(int age)
{
	bool set = false;
	if (age > 0)
	{
		set = true;
		this->age = age;
	}
	return set;
}

string Friend::getName() const
{
	return this->name;
}

string Friend::getPhoneNr() const
{
	return this->phoneNr;
}

string Friend::getEmail() const
{
	return this->eMail;
}

int Friend::getAge() const
{
	return this->age;
}

string Friend::toString() const
{
	// Strängkonkatenering: "AAA" + "BBB" -> "AAABBB"
	// "Kalle" + "Anka" -> "KalleAnka"
	string output;
	output = "Name: " + this->name + "\n";
	output = output + "Phone number: " + this->phoneNr + "\n";
	output += "e-mail: " + this->eMail + "\n";
	output += "age: " + to_string(this->age) + "\n";
	return output;
}

bool Friend::operator==(const Friend &other) const
{
	return this->name == other.name && this->eMail == other.eMail && this->phoneNr == other.phoneNr && this->age == other.age;
}
