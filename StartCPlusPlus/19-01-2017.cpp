#include <iostream>
#include <string>
#include "19-01-2017.h"

using namespace std;

Friend::Friend() {
	name = "EMPTY";
	yearsOld = -1;
}
Friend::Friend(string name) {
	this->name = name;
	yearsOld = -1;
}

string Friend::getName() {
	return name;
}
int Friend::getYearsOld() {
	return yearsOld;
}

void Friend::setName(string name) {
	this->name = name;
}
void Friend::setYearsOld(int yearsOld) {
	this->yearsOld = yearsOld;
}
string Friend::toString() {
	return name + " " + to_string(yearsOld); //2nd print of "Anna 25"
}

int main()
{
	//Test1
	/**/
	Friend anna;
	Friend bob;
	Friend carin("Carin");

	Friend friends[10];
	int numberOfFriends = 0;

	bob.setName("Bob");
	bob.setYearsOld(15);
	anna.setName("Anna"); //1st print of "Anna 25"
	anna.setYearsOld(25); //1st print of "Anna 25"

	cout << endl << endl << anna.getName() << " " << anna.getYearsOld(); //1st print of "Anna 25"
	cout << endl << endl;

	cout << anna.toString() << endl << endl; //2nd print of "Anna 25"
	cout << bob.toString() << endl << endl;  //1st Bob


	friends[numberOfFriends++] = anna;
	friends[numberOfFriends++] = bob;
	cout << friends[0].toString() << endl << endl;
	cout << friends[1].toString() << endl << endl;


	cout << endl << "Test" << endl << endl;
	for (int i = 0; i < 10; i++) {
		cout << friends[i].toString() << endl;
		friends[i].toString();

	}	

	/*for (int i = 0; i < numberOfFriends; i++) {
		if (friends[i].getYearsOld() >= 20 && friends[i].getYearsOld() < 10) {
			cout << endl << friends[i].toString() << endl;
			friends[i].toString();
		}
	}*/

	cout << endl << endl << carin.toString() << endl;

	getchar();
	return 0;
}
