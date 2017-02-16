#include "Dice.h"
#include <iostream>
#include <time.h>
using namespace std;

int main() 
{
	srand(time(NULL));
	Dice *d1; //enkel pekare
	Dice *d2 = nullptr; //enkel pekare tilldelas nullptr
	Dice *d3 = new Dice(12); //S�tter antal sidor till 12
	Dice *d4 = new Dice[5]; //Array med 5 t�rningar
	Dice *d5[5]; //5 pekare i en array
	Dice *d6[5] = { nullptr }; //5 pekare som pekar p� nullptr

	//d2->toss(); //Error. Finns inget objekt p� d2
	d3->toss(); //Kastar den 12 sidiga t�rningen.
	d4->toss(); //kastar f�rsta t�rningen i d4

	//cout << d2->getValue() << endl;
	cout << d3->getValue() << endl;
	cout << d4->getValue() << endl;

	while (d3->getValue() > d4->getValue())
	{

	}

	getchar();
	return 0;
}