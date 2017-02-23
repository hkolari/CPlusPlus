#include "Employee.h"

Employee::Employee(string name, string mail, string department, int salary)
	:Person(name, mail)
{
	this->department = department;
	this->salary = salary;
}

Employee::Employee(const Employee& origObj)
:Person(origObj)
{
	this->department = origObj.department;
	this->salary = origObj.salary;
}

Employee& Employee::operator=(const Employee& origObj)
{
	Person::operator=(origObj);
	this->department = origObj.department;
	this->salary = origObj.salary;
	return *this;
}

//Employee::Employee()
//	:Person()
//{
//	this->department = "EMPTY";
//	this->salary = -1;
//}

Employee::~Employee()
{

}

string Employee::getDepartment() const
{
	return this->department;
}

int Employee::getSalary() const
{
	return this->salary;
}

string Employee::toStringSpecific() const
{
	return "Avdelning: " + this->department + "\nLön: " + to_string(this->salary) + "\n";
}

Employee* Employee::clone() const
{
	return new Employee(*this);
}