#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{	
	private:
		T	*ptr;

	public:
		Array();
		Array(unsigned int n);
		Array(Array &copy);
		Array& operator=(const Array &instance);
		~Array();
};


#endif