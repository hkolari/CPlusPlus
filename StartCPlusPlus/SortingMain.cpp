#include <string>
#include <iostream>

using namespace std;

void sort(int theArr[], int nrOfElements); //Selection Sort For Int
void sortString(string str[], int nrOfString); //Selection Sort For String
//There is also Insertion Sort, pretty good.

///////////////////////////////////////////////////////////////////////////

int main()
{
	int nrs[7] = {8, 6, 3, 5, 9, 2, 4};
	sort(nrs, 7);
	for (int i = 0; i < 7; i++)
	{
		cout << to_string(nrs[i]) + " | ";
	}

	cout << endl;

	string str[5] = { "Grape", "Apple", "Banana", "Kiwi", "Orange" };
	sortString(str, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << str[i] + " | ";
	}


	getchar();
	return 0;
}

///////////////////////////////////////////////////////////////////////////

void sort(int theArr[], int nrOfElements)
{
	int temp = 0;
	int minIndex = 0;
	for (int i = 0; i < nrOfElements - 1; i++)
	{
		minIndex = i;
		for (int k = (i + 1); k < nrOfElements; k++)
		{
			if (theArr[k] < theArr[minIndex]) //You can swap the "<" with ">" if you want it from max to min.
			{
				minIndex = k;
			}
		}
		temp = theArr[i];
		theArr[i] = theArr[minIndex];
		theArr[minIndex] = temp;
	}
}
void sortString( string str[], int nrOfString)
{
	string temp = "";
	int minIndex = 0;
	for (int i = 0; i < nrOfString - 1; i++)
	{
		minIndex = i;
		for (int k = (i + 1); k < nrOfString; k++)
		{
			if (str[k] < str[minIndex]) //You can swap the "<" with ">" if you want it from max to min.
			{
				minIndex = k;
			}
		}
		temp = str[i];
		str[i] = str[minIndex];
		str[minIndex] = temp;
	}
}