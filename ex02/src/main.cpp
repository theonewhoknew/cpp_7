#include "../inc/Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> arr_a(5);

	arr_a.print();
	std::cout << "------------out of limits check--------" << std::endl;
	try
    {
       std::cout << arr_a[5] << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << "\n";
    }
	std::cout << std::endl << std::endl;
	arr_a.size();
	arr_a.fill(42);
	std::cout << "------------print arr_a--------" << std::endl;
	arr_a.print();

	Array<int> arr_b(arr_a);

	std::cout << "------------print arr_b--------" << std::endl;
	arr_b.print();

	arr_b.fill(24);

	std::cout << "------------print arr_a--------" << std::endl;
	arr_a.print();

	std::cout << "------------print arr_b--------" << std::endl;
	arr_b.print();

	arr_b = arr_a;

	std::cout << "------------print arr_a--------" << std::endl;
	arr_a.print();

	std::cout << "------------print arr_b--------" << std::endl;
	arr_b.print();

	std::cout << "------------chars--------" << std::endl << std::endl;
	Array<char>char_arr(3);

	char_arr.size();
	char_arr.fill('a');
	char_arr.print();
}