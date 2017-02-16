#include "PersonRegister.h"
#include "Student.h"
#include "Employee.h"

void PersonRegister::initiate(int from)
{
	for (int i = from; i < this->capacity; i++)
	{
		this->persons[i] = nullptr;
	}
}

void PersonRegister::expand()
{
	this->capacity += 2; //Borde vara 10 ex-vis
	Person* *temp = new Person*[this->capacity];
	for (int i = 0; i < this->nrOfPersons; i++)
	{
		temp[i] = this->persons[i];
	}
	delete[] this->persons;
	this->persons = temp;
	this->initiate(this->nrOfPersons);
}

int PersonRegister::getNrOfPersons() const
{
	return this->nrOfPersons;
}

bool PersonRegister::getAllPersonsAsStrings(string strArr[], int capOfstrArr) const
{
	bool filled = false;
	if (capOfstrArr >= this->nrOfPersons)
	{
		for (int i = 0; i < this->nrOfPersons; i++)
		{
			strArr[i] = this->persons[i]->toString();
		}
		filled = true;
	}
	return filled;
}

PersonRegister::PersonRegister(int capacity = 3)
{
	this->nrOfPersons = 0;
	this->capacity = capacity;
	this->persons = new Person*[this->capacity];
	this->initiate();
}

PersonRegister::PersonRegister(const PersonRegister& origObj)
{
	this->getNrOfPersons = origObj.nrOfPersons;
	this->capacity = origObj.capacity;
	this->persons = new Person*[origObj.capacity];
	Student* aStudPtr = nullptr;
	Employee* anEmplPtr = nullptr;
	for (int i = 0; i < origObj.nrOfPersons; i++)
	{
		aStudPtr = dynamic_cast<Student*>(origObj.persons[i]);
		if (aStudPtr != nullptr) //Aha, en Student som ska återskapas!
		{
			this->persons[i] = new Student(*aStudPtr);
			//this->persons[i] = new Student(aStudPtr->getName(), aStudPtr->getMail(), aStudPtr->getStudyProgramme);
		}
		else
		{
			anEmplPtr = dynamic_cast<Employee*>(origObj.persons[i]);
			this->persons[i] = new Employee(*anEmplPtr);
		}
	}
}

PersonRegister::~PersonRegister()
{
}

void PersonRegister::addStudent(string name, string mail, string studyProgramme)
{
	if (this->nrOfPersons==this->capacity)
	{
		this->expand();
	}
	this->persons[this->nrOfPersons++] = new Student(name, mail, studyProgramme);
}

void PersonRegister::addEmployee(string name, string mail, string department, int salary)
{
	if (this->nrOfPersons == this->capacity)
	{
		this->expand();
	}
	this->persons[this->nrOfPersons++] = new Employee(name, mail, department, salary);
}