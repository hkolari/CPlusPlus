#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
private:
	string name;
	string mail;

public:
	Person(string name, string mail);
	Person();
	Person(const Person& origObj);
	Person& operator=(const Person& origObj);
	virtual ~Person();
	string getName() const;
	string getMail() const;
	string toString() const;
	virtual string toStringSpecific() const = 0; //Pure virtual
	virtual Person* clone() const = 0; //Pure virtual
};


#endif // ! PERSON_H
