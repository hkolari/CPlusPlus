#include"Student.h"
#include"Employee.h"
#include<iostream>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Swedish");

	//Statiskt allokerat objekt
	/*Student stud("Pelle", "p@bth.se", "Civ Säk");
	cout << stud.getMail() << endl;*/

	//Dynamiskt allokerad objekt

	//Student* s1 = new Student("Lisa", "l@bth.se", "Civ Spel");
	//cout << s1->getName() << endl;
	//Person* p1 = new Student("Olle", "o@bth.se", "Civ Säk");
	//cout << p1->getMail() << endl;;
	//Student* s2 = New Person("Kajsa", "k@bth.se"); //En person är inte nödvändigtvis student
	//cout << s1->toString() << endl;
	//cout << p1->toString() << endl;
	//Person* p2 = new Employee("Lisa", "l@bth.se", "DIDO", 23000);
	//cout << p2->toString() << endl;

	//delete s1;
	//delete p1;
	//delete p2;

	//----------------------------------------------------//
	
	//Statiskt allokerad array innehåller Person objekt
	//Inte ok eftersom Person är abstract
	//Person persons[3];

	//Dynamiskt allokerad array innehåller Person objekt.
	//Inte ok eftersom Person är abstract
	//Person* persons = new Person[3];

	//Statiskt allokerad array innehåller Person pekare
	//OK!
	//Person* persons[3];

	//Dynamiskt allokerad array innehåller Person pekare
	//OK!
	Person* *persons = new Person*[3];
	persons[0] = new Student("Karin", "k@bth.se", "Civ Säk");
	persons[1] = new Employee("Bosse", "b@bth.se", "DIKR", 23000);
	persons[2] = new Student("Pelle", "p@bth.se", "Civ Spel");
	persons[3] = new Employee("Eva", "e@bth.se", "DIDO", 25000);

	//Presentera samtliga
	//for (int i = 0; i < 4; i++)
	//{
	//	cout << persons[i]->toString() << endl;
	//}

	//Presentera endast Studenter
	Student* aStudPtr = nullptr;
	for (int i = 0; i < 4; i++)
	{
		//if (typeid(*persons[i]) == typeid(Student))
		aStudPtr = dynamic_cast<Student*>(persons[i]);
		if (aStudPtr != nullptr) //Det är ett Student objekt som pekas ut!
		{
			cout << persons[i]->toString() << endl;
		}
	}

	//Presentera endast lönen för de anställda 
	Employee* anEmplptr = nullptr;
	for (int i = 0; i < 4; i++)
	{
		anEmplptr = dynamic_cast<Employee*>(persons[i]);
		if (anEmplptr != nullptr)
		{
			cout << anEmplptr->getSalary() << endl;
		}
	}

	//Återlämna objektet
	for (int i = 0; i < 4; i++)
	{
		delete persons[i];
	}

	//Återlämna arrayen
	delete[] persons;
	

	system("pause");
	return 0;
}