#include"Student.h"

Student::Student(string name, string mail, string studyProgramme)
	:Person(name, mail)
{
	this->studyProgramme = studyProgramme;
}

Student::Student(const Student& origObj)
	:Person(origObj)
{
	this->studyProgramme = origObj.studyProgramme;
}

Student& Student::operator=(const Student& origObj)
{
	operator=(origObj);
	this->studyProgramme = origObj.studyProgramme;
	return *this;
}

Student::~Student()
{

}

string Student::getStudyProgramme() const
{
	return this->studyProgramme;
}

string Student::toStringSpecific() const
{
	return "Studieprogram: " + this->studyProgramme + "\n";
}

Student* Student::clone() const
{
	return new Student(*this);
}