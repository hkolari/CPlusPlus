#ifndef FRIEND_H
#define FRIEND_H

#include <string>

using namespace std;

class Friend
{
private:
	string name;
	string phoneNr;
	string eMail;
	int age;

public:
	Friend(); // Default kontruktor
	Friend(const string & name, const string & phoneNr, const string & eMail, int age); // Överlagrad konstruktor

	void setName(const string & name);
	void setPhoneNr(const string & newphoneNr);
	void setEmail(const string & email);
	bool setAge(int age);

	string getName() const;
	string getPhoneNr() const;
	string getEmail() const;
	int getAge() const;

	// toString returnerar alla medlemsvariabler
	// i sträng-format för att underlätta utskrift
	string toString() const;

	//Logiska operatorer
	bool operator == (const Friend &other) const;
};


#endif

