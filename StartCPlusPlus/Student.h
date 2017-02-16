#ifndef  STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person
{
private:
	string studyProgramme;


public:
	Student(string name="EMPTY", string mail="EMPTY", string studyProgramme="EMPTY");
	Student(const Student& origObj);
	Student & operator=(const Student& origObj);
	virtual ~Student();
	string getStudyProgramme() const;
	string toStringSpecific() const;
};

#endif // ! STUDENT_H
