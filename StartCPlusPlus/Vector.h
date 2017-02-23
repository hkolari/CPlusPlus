#ifndef VECTOR_H
#define VECTOR_H
template<typename T>
class Vector
{
private:
	T* items;
	int capacity;
	int capacityIncrement;
	int nrOfItems;

	void expand();

public:
		//*konstruktorer(default, med parameter för kapacitet, med parameter för kapacitet och inkrement)
		Vector(int capacity = 10, int capacityIncrement = 5);
		
		//* destruktor
		Virtual ~Vector();

		//* copy - konstruktor
		//* tilldelningsoperator

		void addLast(T item);
		void addFirst(T item);
		void addAt(int index, T item) throw(...);

		T getFirst() const throw(...);
		T getLast() const throw(...);
		T getAt(int index) const throw(...);

		T removeFirst() throw(...);
		T removeLast() throw(...);
		T removeAt(int index) throw(...);
		void removeBetween(int start, int end) throw(...);

		//void clear()
		// +operatorn
		// []operatorn

};

template<typename T>
void Vector<T>::expand()
{
	this->capacity += this->capacityIncrement;
	T* temp = new T*[this->capacity];
	for (int i = 0; i < this->nrOfItems; i++)
	{
		temp[i] = this->items[i];
	}
	delete[] this->items;
	this->items = temp;
}

template<typename T>
Vector<T>::Vector(int capacity, int capacityIncrement)
{
	this->nrOfItems = 0;
	this->capacity = capacity;
	this->capacity = capacityIncrement;
	this->items = new T[this->capacity];
}

template<typename T>
Vector<T>::~Vector()
{
	delete[] this->items;
}

template<typename T>
void Vector<T>::addLast(T item)
{
	if (this->nrOfItems == this->capacity)
	{
		this->expand();
	}
	this->items[this->nrOfItems++] = item;
}

template<typename T>
void Vector<T>::addFirst(T item)
{
	if (this->nrOfItems == this->capacity)
	{
		this->expand();
	}
	this->items[this->nrOfItems++] = this->items[0];
	this->items[0] = item;
}

template<typename T>
void Vector<T>::addAt(int index, T item) throw(...)
{
	if (index < 0 || index > this->nrOfItems)
	{
		throw "Index is not allowed!";
	}
	if (this->nrOfItems == this->capacity)
	{
		this->expand();
	}
	this->items[this->nrOfItems++] = this->items[index];
	this->items[index] = item;
}

template<typename T>
T Vector<T>::getFirst() const throw(...)
{

}

template<typename T>
T Vector<T>::getLast() const throw(...)
{

}

template<typename T>
T Vector<T>::getAt(int index) const throw(...)
{

}

template<typename T>
T Vector<T>::removeFirst() throw(...)
{

}

template<typename T>
T Vector<T>::removeLast() throw(...)
{

}

template<typename T>
T Vector<T>::removeAt(int index) throw(...)
{

}
template<typename T>s
void Vector<T>::removeBetween(int start, int end) throw(...)

#endif // !VECTOR_H
