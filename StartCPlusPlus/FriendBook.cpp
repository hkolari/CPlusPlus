#include "FriendBook.h"

void FriendBook::expand()
{
	//1. Skapa en ny tempor�r array som �r ST�RRE
	Friend * temp = new Friend[this->capacity * 2];

	//2. Elementvis kopering fr�n den gamla arrayen till den nya
	for (int i = 0; i < this->nrOfFriends; i++)
	{
		temp[i] = this->friends[i];
	}

	//3. Avallokera den gamla arrayen
	delete[] this->friends;

	//4. Rikta om pekarna
	this->friends = temp;

	//5. Uppdatera eventuella variabler
	this->capacity = this->capacity * 2;
	//temp = nullptr;
}

FriendBook::FriendBook()
{
	this->nrOfFriends = 0;
	this->capacity = 2; //Sn�lar lite, detta f�r att testa expandering
	this->friends = new Friend[this->capacity];
}

FriendBook::~FriendBook()
{
	delete[] this->friends;
}

void FriendBook::addFriend(const string & name, const string & eMail, const string & phoneNr, int age)
{
	//�r arrayen full?
	if (this->nrOfFriends == this->capacity)
	{
		//Expandering
		this->expand();
	}
	/*
	this->friends[this->nrOfFriends].setName(name);
	this->friends[this->nrOfFriends].setEmail(eMail);
	this->friends[this->nrOfFriends].setPhoneNr(phoneNr);
	this->friends[this->nrOfFriends].setAge(age);
	*/
	this->friends[this->nrOfFriends++] = Friend(name, eMail, phoneNr, age);
	//this->nrOfFriends++;
}

