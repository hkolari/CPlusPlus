#ifndef STACK_H
#define STACK_H
#include "IStack.h"

template<typename T>
class Stack: public IStack<T>
{
private:
	T* elements;
	int nrOfElements;
	int capacity;
	void expand();

public:
	Stack();
	virtual ~Stack();
	Stack(const Stack<T>& origObj);
	void operator=(const Stack<T> &origObj);
	void push(const T& element);
	T pop() throw(...);
	T peek() const throw(...);
	bool isEmpty() const;

};

/////////////////////////////////////////////////

template<typename T>
Stack<T>::Stack()
{
	this->capacity = 3;
	this->nrOfElements = 0;
	this->elements = new T[this->capacity];
}

template<typename T>
Stack<T>::~Stack()
{
	delete[] this->elements;
}

template<typename T>
Stack<T>::Stack(const Stack<T>& origObj)
{
	this->capacity = origObj.capacity;
	this->nrOfElements = origObj.nrOfElements;
	this->elements = new T[origObj.capacity];
}

template<typename T>
void Stack<T>::operator=(const Stack<T>& origObj)
{
	if (this != &origObj)
	{
		delete[] this->elements;
		this->capacity = origObj.capacity;
		this->nrOfElements = origObj.nrOfElements;
		this->elements = new T[origObj.capacity];
		for (int i = 0; i < origObj.nrOfElements; i++)
		{
			this->elements[i] = origObj.elements[i];
		}
	}
}

template<typename T>
void Stack<T>::push(const T& element)
{
	if (this->nrOfElements == this->capacity)
	{
		this->expand();
	}
	this->elements[this->nrOfElements] = element;
	this->nrOfElements++;
}

template<typename T>
void Stack<T>::expand()
{
	this->capacity += 10;
	T* temp = new T[this->capacity];
	for (int i = 0; i < this->nrOfElements; i++)
	{
		temp[i] = this->elements[i];
	}
	delete[] this->elements;
	this->elements = temp;
}

template<typename T>
T Stack<T>::pop()throw(...)
{
	if (this->nrOfElements == 0)
	{
		throw "Empty stack!";
	}
	return this->elements[--this->nrOfElements];
}
template<typename T>
T Stack<T>::peek() const throw(...)
{
	if (this->nrOfElements == 0)
	{
		throw "Empty stack!";
	}
	return this->elements[this->nrOfElements - 1];
}

template<typename T>
bool Stack<T>::isEmpty() const
{
	return this->nrOfElements == 0;
}

#endif