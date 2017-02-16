#include <iostream>
#include <string>
#include <fstream> //CREATE YOUR TXT FILE IN VISUAL STUDIO, NOT IN FOLDER ITSELF!!!

using namespace std; //Use this with #include<string>

int main() {

	//Test 1 (String and readline)
	/*
	int val1 = 10; //10 is unrelevant with cin below
	string name = "Oliver";
	cout << "Enter a value: "; //cout = write
	cin >> val1; cin.ignore(); //cin = read
	cout << "Hello " << name << " age: " << val1;
	getchar();
	return 0;
	*/

	//Test 2 (Simple plus)
	//cin.ignore not needed with normal numbers (heltal).
	/*
	int val1 = 0, val2 = 0;
	int sum = 0;
	cout << "Number 1: ";
	cin >> val1; // cin.ignore();
	cout << "Number : ";
	cin >> val2; // cin.ignore();
	cout << "The sum of " << val1 << " + " << val2 << " = " << (val1 + val2);

	getchar();
	return 0;
	*/

	//Test 3
	/*
	string name = "";
	
	setlocale(0, "swedish"); //Doesn't help in any way. Useless.

	//cin >> name; cin.ignore(); WRONG
	getline(cin, name, '!'); //Kan ej mata in "дец" inom cin
	cout << "\n" << endl << name;

	cin.ignore(); //Incase you don't use this, you won't be able to use ! in a string. It will just end the program.
	getchar();
	return 0;
	*/

	//Test 4
	/*
	string name = "";
	getline(cin, name);

	cout << endl << name;
	cout << " Length: " << name.length() << endl;
	cout << "Position of \"l\"" << name.find("l") << endl;
	cout << "Compare if Oliver == Olle" << name.compare("Olle");

	cout << "\n == " << ("a" == "b") << endl;
	cout << " < " << ("a" < "b") << endl;
	cout << " > " << ("a" > "b") << endl;

	getchar();
	return 0;
	*/

	//Test 5
	/*
	ifstream in;
	//ofstream
	in.open("data.txt");
	int val1 = 0;
	in >> val1;
	cout << "First row: " << val1;
	getchar();
	return 0;
	*/

	//Test 6
	/*
	ifstream input; 
	input.open("data.txt");
	int r1, r2, r3, r4;
	input >> r1;
	input >> r2;
	input >> r3;
	input >> r4;

	cout << r1 << " " << r2 << " " << r3 << " " << r4 << " " << (r1 + r2 + r3 + r4);

	getchar();
	return 0;
	*/

	//Test 7
	/*
	int *numbers = nullptr;
	string animal1 = "", animal2 = "";
	int sizeAnimal1 = 0, sizeAnimal2 = 0;

	ifstream input;
	input.open("dataAnimal.txt");

	getline(input, animal1);
	input >> sizeAnimal1; input.ignore();
	getline(input, animal2);
	input >> sizeAnimal2; input.ignore();

	cout << animal1 << " size: " << sizeAnimal1 << endl;
	cout << animal2 << " size: " << sizeAnimal2 << endl;

	ofstream output;
	output.open("dataAnimal.txt", ofstream::app);
	output << endl << "Kamel" << endl << "10";
	input.close();
	getchar();
	return 0;
	*/
	
	//Test 8
	int *numbers = nullptr;
	int capacity = 0;

	ifstream input;
	input.open("dataAnimal2.txt");

	input >> capacity; input.ignore();
	string *animals = new string[capacity];
	int *animalCount = new int[capacity];

	for (int i = 0; i < capacity; i++)
	{
		getline(input, animals[i]);
		input >> animalCount[i]; input.ignore();
	}

	for (int i = 0; i < capacity; i++)
	{
		cout << endl << animals[i] << ", count: " << animalCount[i];
	}
	bool exists = false;
	int index = 0;
	for (int i = 0; i < capacity && !exists) 
	{
		exists = animals[i] == "Apa";
		if (exists) 
		{
			index = 1;
		}
	}
	int currentSize = capacity;

	animals[index] = animals[currentSize - 1];
	animals[currentSize - 1] = "";
	animalCount[index] = animalCount[currentSize - 1];
	animalCount[currentSize - 1] = -1;
	currentSize--;

	for (int i = 0; i < currentSize; i++) 
	{
		cout << endl << animals[i] << ", count: " << animalCount[i];
	}
	
	delete[] animals;
	delete[] animalCount;

	input.close();
	getchar();
	return 0;
}
