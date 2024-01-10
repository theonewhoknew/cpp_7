#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	new T[n];
}

template<typename T>
Array<T>::Array(Array &copy)
{
	new T[];
}


#endif