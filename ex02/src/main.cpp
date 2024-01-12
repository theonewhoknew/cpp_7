#include "../inc/Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> arr_a(5);

	try
    {
       std::cout << arr_a[5] << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cerr << e.what() << "\n";
    }

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

	
}