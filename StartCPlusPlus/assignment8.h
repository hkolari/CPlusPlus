#ifndef ASSIGNMENT8_H
#define ASSIGNMENT8_H

#include <string>
using namespace std;

class Student {
private:
	string name;
	string programme;
	string phoneNumber;
	
public:
	Student();
	Student(string name, string programme, string phoneNumber);

	string getName();
	string getProgramme();
	string getPhoneNumber();

	void setName(string name);
	void setProgramme(string programme);
	void setPhoneNumber(string phoneNumber);

	string toString();
};

#endif