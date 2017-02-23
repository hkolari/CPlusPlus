#include <string>
#include <iostream>

using namespace std;

//Guess my number, let's say 130 of 500. I will say if it is less or more.
//Linear Search | 1,2,3,4,5,6..... till it reaches 130
//Binary Search | 250(less), 125(more), 175(less), etc

template<typename T>
int binarySearch(T theArr[], int nrOfElements, T search);

int main()
{


	getchar();
	return 0;
}

template<typename T>
int binarySearch(T theArr[], int nrOfElements, T search)
{
	int start = 0;
	int end = nrOfElements;
	int middle = nrOfElements/2;
	while (search != theArr[middle] && end >= start)
	{
		if (search < theArr[middle])
		{
			end = middle - 1;
		}
		else
		{
			start = middle + 1;
		}

		middle = (start + end)/2;

		if (end < start)
		{
			middle = -1;
		}
		return middle;
	}
}