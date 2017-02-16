#include <iostream>
#include <string>
#include "assignment8.h"

using namespace std;

int main() {
	Student students[10];
	Student StudentA("Bob", "Civ-Spel", "12345");
	Student StudentB("Weeabo", "Japanese", "Sugoi Sugoi");
	students[0] = StudentA;
	students[5] = StudentB;
	for (int i = 0; i < 10; i++) {
		cout << students[i].toString() << endl;
		students[i].toString();
	}
	getchar();
	return 0;
}