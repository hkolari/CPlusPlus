#include <iostream>
#include "Friend.h"

using namespace std;

// Funktionsdeklaration/Funktionsprototyper/Function signatures
void showAll(const Friend arr[], int nrOfFriends);
void add(Friend arr[], int &nrOfFriends);
int search(const Friend arr[], int nrOfFriends, const Friend &toFind); //const för att toFind ska vara skrivskyddad || const & pga prestanda skäl
bool remove(Friend arr[], int &nrOfFriends, const Friend &toRemove);

int main()
{
	//Friend friendArr[20; // statsikt allokerad array på 20 patser. Innehållande Friend-objekt.
	int capacity = 20;

	//Dynamisk minnesallokering
	Friend* friendArr = new Friend[capacity]; //Defaultkonstruktor x 20
	// Kalle 04555-1234 kalle@mail.se 25
	friendArr[0].setName("Kalle");
	friendArr[0].setPhoneNr("04555-1234");
	friendArr[0].setEmail("kalle@mail.se");
	friendArr[0].setAge(25);

	//Stina 0455-4321 stina@mail.se
	//Friend tmp("Stina", "0455-4321", "stina@mail.se", 30);
	friendArr[1] = Friend("Stina", "0455-4321", "stina@mail.se", 30);
	int nrOfFriends = 2;

	//Ytlig kopiering
	//Friend *arr2 = new Friend[capacity];
	Friend *arr2 = friendArr;
	remove(arr2, nrOfFriends, arr2[0]);
	showAll(friendArr, nrOfFriends);

	//Djupkopiering
	Friend *copy = new Friend[capacity];
	for (int i = 0; i < nrOfFriends; i++)
	{
		copy[i] = friendArr[i];
	}

	//cout << search(friendArr, nrOfFriends, Friend("Stina", "0455-4321", "stina@mail.se", 30)) << endl;
	//add(friendArr, nrOfFriends);
	//remove(friendArr, nrOfFriends, friendArr[0]);
	//showAll(friendArr, nrOfFriends);

	delete [] friendArr; //Avallokering
	getchar();
	return 0;
}

//Funktionsdefinitioner
void showAll(const Friend arr[], int nrOfFriends)
{
	for (int i = 0; i < nrOfFriends; i++)
	{
		cout << arr[i].toString() << endl;
	}
}

void add(Friend arr[], int & nrOfFriends)
{
	string name, eMail, phoneNr;
	int age;
	cout << "Name: ";
	getline(cin, name);

	cout << "Email: ";
	getline(cin, eMail);

	cout << "Phone Number : ";
	getline(cin, phoneNr);

	cout << "Age: ";
	cin >> age;
	cin.ignore();

	/*
	arr[nrOfFriends].setName(name);
	arr[nrOfFriends].setEmail(eMail);
	arr[nrOfFriends].setPhoneNr(phoneNr);
	arr[nrOfFriends].setAge(age);
	*/

	arr[nrOfFriends] = Friend(name, phoneNr, eMail, age);
	nrOfFriends++;
}

int search(const Friend arr[], int nrOfFriends, const Friend &toFind)
{
	//Linjärsökning
	int pos = -1; //Pos håller index på den vän vi söker

	for (int i = 0; i < nrOfFriends && pos == -1; i++)
	{
		if (toFind == arr[i])
		{
			pos = i;

		}
	}
	return pos;
}

bool remove(Friend arr[], int &nrOfFriends, const Friend &toRemove)
{
	bool removed = false; //Antar att personen inte existerar
	int pos = search(arr, nrOfFriends, toRemove);

	if (pos != -1)
	{
		//Vännen existerar i vår array (arr)
		for (int i = pos; i < nrOfFriends - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		nrOfFriends--;
		removed = true;
	}
	return removed;
}