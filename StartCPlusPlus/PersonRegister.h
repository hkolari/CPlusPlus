#ifndef  PERSONREGISTER_H
#define PERSONREGISTER_H
#include <string>
#include <iostream>
#include "Person.h"

using namespace std;

class PersonRegister
{
private:
	int nrOfPersons;
	int capacity;
	Person* *persons;
	void initiate(int from = 0);
	void expand();
	void freeMemory();

public:
	PersonRegister(int capacity = 3);
	virtual ~PersonRegister();
	void addStudent(string name, string mail, string studyProgramme);
	void addEmployee(string name, string mail, string department, int salary);
	int getNrOfPersons()const;
	bool getAllPersonsAsStrings(string strArr[], int capOfstrArr)const;
	int getNrOfStudents()const;
	bool getAllStudentsAsStrings(string strArr[], int capOfstrArr)const;
};

#endif // ! PERSONREGISTER_H

