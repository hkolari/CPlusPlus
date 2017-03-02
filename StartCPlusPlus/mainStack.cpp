#include "Stack.h"

#include <iostream>
#include <string>

using namespace std;

void info(int n);
int faculty(int n);
int sum(int start, int end);

template<typename T>
int partition(T theArray[], int start, int end);
template<typename T>
void swapThem(T& item1, T& item);
template<typename T>
void sort(T theArray[], int start, int end);

int main()
{
	
	Stack<string> s;
	s.push("Banan");
	s.push("Motorboat");
	s.push("Cykel");
	try
	{
		cout << s.pop() << endl;
	}
	catch (char * e)
	{
		cout << e << endl;
	}
	try
	{
		cout << s.peek() << endl;
	}
	catch (char * e)
	{
		cout << e << endl;
	}
	/*
	info(5);
	cout << to_string(faculty(4)) << endl;
	cout << to_string(sum(3, 7)) << endl;
	getchar();
	*/

	const int cap = 80;
	srand(static_cast<unsigned>(time(0)));
	int anArray[cap];
	for (int i = 0; i < cap; i++)
	{
		anArray[i] = rand() & 1000 + 1;
	}
	sort(anArray, 0, cap - 1);
	for (int i = 0; i < cap; i++)
	{
		cout << anArray[i] << "";
	}
	cout << endl;
	return 0;
}

void info(int n)
{
	if (n > 0)
	{
		cout << "nr är nu == " << n << endl;
		info(n - 1);
	}
	cout << "info() lämnar nu med n == " << n << endl;
}

int faculty(int n)
{
	if (n > 1)
	{
		return n*faculty(n-1);
	}
	else
	{
		return 1;
	}
}

int sum(int start, int end)
{
	if (end > start)
	{
		return end+sum(start, (end - 1));
	}
	else
	{
		return start;
	}
}

template<typename T>
partition(T theArray[], int start, int end)
{
	T pivotValue = theArray[start];
	int pivotPosition = start;
	for (int i = (start + 1); i < end; i++)
	{
		if (theArray[i] < pivotValue)
		{
			swapThem(theArray[i], theArray(pivotPosition + 1));
			swapThem(theArray[pivotPosition + 1], theArray[pivotPosition]);
			pivotPosition++;
		}
		return pivotPosition;
	}
}

template<typename T>
void swapThem(T& item1, T& item)
{
	T temp = item1;
	item1 = item2;
	item 2 = temp;
}
template<typename T>
void sort(T theArray[], int start, int end)
{
	int privotPos = partition(theArray, start, end);
}

