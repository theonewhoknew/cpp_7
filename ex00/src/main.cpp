#include "../inc/templates.hpp"
#include <iostream>

int main()
{	
	int a = 5;
	int b = 0;

	std::cout << "int a is " << a << " and int b is " << b << std::endl;
	swap(&a, &b);
	std::cout << "inta is " << a << " and  intb is " << b << std::endl;
	std::cout << "min of int a and  int b is " << min(a, b) << std::endl;
	std::cout << "max of int a and int b is " << max(a, b) << std::endl;

	long c = 500;
	long d = 10000000;

	std::cout << "long c is " << c << " and long d is " << d << std::endl;
	swap(&c, &d);
	std::cout << "long c is " << c << " and long d is " << d << std::endl;
	std::cout << "min of long c and long d is " << min(c, d) << std::endl;
	std::cout << "max of long c and long d is " << max(c, d) << std::endl;

/* 	std::string e = "hola";
	std::string f = "adios";

	std::cout << "char * e is " << e << " and char * f is " << f << std::endl;
	swap(e, f);
	std::cout << "char * e is " << e << " and char * f is " << f << std::endl;
	std::cout << "min of char * e and char * f is " << min(e, f) << std::endl;
	std::cout << "max of char * e and char * f is " << max(e, f) << std::endl; */
}