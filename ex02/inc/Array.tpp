#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"
#include <iostream>

template<typename T>
Array<T>::Array()
{
	_ptr = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	_ptr = new T[n];
	_n = n;
	for (unsigned int i = 0; i < _n; i++)
		_ptr[i] = 0;
}

template<typename T>
Array<T>::Array(Array &copy)
{
	_ptr = new T[copy._n];
	_n = copy._n;
	for (unsigned int i = 0; i < _n; i++)
		_ptr[i] = copy._ptr[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array &instance)
{	
	delete[] _ptr;
	_ptr = new T[instance._n];
	_n = instance._n;
	for (unsigned int i = 0; i < _n; i++)
		_ptr[i] = instance._ptr[i];
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _ptr;
}

template<typename T>
T& Array<T>::operator[](unsigned int idx)
{	
	if (idx >= _n)
        throw Array::OutOfBoundsException();
	else
		return (_ptr[idx]);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what(void) const throw()
{
	return ("Index is out of bounds.");
};

template<typename T>
void	Array<T>::size()
{
	std::cout << _n << std::endl;
}

template<typename T>
void	Array<T>::print()
{	
	for (unsigned int i = 0; i < _n; i++)
	{
		std::cout << _ptr[i] << std::endl;
	}
}

template<typename T>
void	Array<T>::fill(T element)
{	
	for (unsigned int i = 0; i < _n; i++)
	{
		_ptr[i] = element;
	}
}

#endif