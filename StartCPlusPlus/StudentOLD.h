#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "Person.h"

//inheritance
class Student : public Person 
{
private: 
	int regNr;

public: 
	Student(string name, string email, int regNr);
	int getRegNr() const;

};

#endif