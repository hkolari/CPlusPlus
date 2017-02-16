#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

class Employee: public Person
{
private:
	string department;
	int salary;

public:
	Employee(string name="EMPTY", string mail="EMPTY", string department="EMPTY", int salary=-1);
	//Employee();
	Employee(const Employee& origObj);
	Employee& operator=(const Employee& origObj);
	virtual ~Employee();
	string getDepartment() const;
	int getSalary() const;
	string toStringSpecific() const;

};



#endif // !EMPLOYEE_H

