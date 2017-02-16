#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person 
{
private:
	string name;
	string email;

public: 
	Person(string name, string email);
	string getName() const;
	string getEmail() const;
};

#endif
