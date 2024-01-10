#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>

template <typename T>
void	iter(T arr[], int n, void (*f)(T &element))
{
	for (int i = 0; i < n; i++)
	{
		f(arr[i]);
	}
	return ;
}

template <typename T>
void	print_arr(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	return ;
}

template <typename T>
void add_one(T &a)
{
	a++;
	return ;
}


#endif