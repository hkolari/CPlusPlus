#ifndef FRIENDBOOK_H
#define FRIENDBOOK_H

#include "Friend.h"

class FriendBook
{
private:
	Friend * friends;
	int capacity;
	int nrOfFriends;

	void expand();
	int search(const string &name, const string &eMail, const string &phoneNr, int age) const;
public:
	FriendBook();
	~FriendBook(); // Destruktor

	void addFriend(const string &name, const string &eMail, const string &phoneNr, int age);
	bool removeFriend(const string &name, const string &eMail, const string &phoneNr, int age);

	bool exists(const string &name, const string &eMail, const string &phoneNr, int age) const;
};

#endif