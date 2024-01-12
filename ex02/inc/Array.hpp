#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{	
	private:
		T				*_ptr;
		unsigned int	_n;

	public:
		Array();
		Array(unsigned int n);
		Array(Array &copy);
		Array& operator=(const Array &instance);
		~Array();

		T& operator[](unsigned int idx);
		
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		void	size();
		void	print();
		void	fill(T element);
};

#include "Array.tpp"

#endif