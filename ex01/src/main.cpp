#include "../inc/iter.hpp"
#include <string.h>
#include <cstdlib>

int	main(void)
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	iter(arr, 10, add_one);

	print_arr(arr, 10);

	std::cout << std::endl;

	char arr_char[10] = {'a', 'b', 'c'};

	iter(arr, 3, add_one);

	print_arr(arr_char, 3);

	std::cout << std::endl;

	float f_arr[10] = {1.7, 2.7, 3.7, 4.7, 5.7, 6.7, 7.7, 8.7, 9.7, 10.7};

	iter(f_arr, 10, add_one);

	print_arr(f_arr, 10);

	std::cout << std::endl;

/* 	char *str_arr[2];

	str_arr[0] = strdup("hola");
	str_arr[1] = strdup("adios");
	free(str_arr[0]);
	free(str_arr[1]);

 	iter(str_arr, 2, add_one);

	print_arr(str_arr, 2); */
}