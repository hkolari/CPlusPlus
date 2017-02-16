#include "Person.h"
#include "Student.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Student *s1 = new Student("Anna", "anna@bth.se", 311);
	Person *p1 = new Student("Bob", "bob@bth.se", 642); //Classtype decides which class to use
	Person *p2 = s1;
	//Student *s2 = p1;

	cout << s1->getRegNr() << endl;
	cout << s1->getEmail() << endl;
	//cout << p1->getRegNr() << endl; //Is a person
	cout << p1->getEmail() << endl;

	delete s1;
	delete p1;
	return 0;
}