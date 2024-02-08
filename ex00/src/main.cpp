#include "../inc/templates.hpp"
#include <iostream>

int main()
{	
	int a = 5;
	int b = 0;

	std::cout << "int a is " << a << " and int b is " << b << std::endl;
	std::cout << "swap"  << std::endl;
	swap(a, b);
	std::cout << "int a is " << a << " and  intb is " << b << std::endl;
	std::cout << "min of int a and  int b is " << ::min(a, b) << std::endl;
	std::cout << "max of int a and int b is " << ::max(a, b) << std::endl;

	long c = 500;
	long d = 10000000;

	std::cout << "long c is " << c << " and long d is " << d << std::endl;
	std::cout << "swap"  << std::endl;
	swap(c, d);
	std::cout << "long c is " << c << " and long d is " << d << std::endl;
	std::cout << "min of long c and long d is " << ::min(c, d) << std::endl;
	std::cout << "max of long c and long d is " << ::max(c, d) << std::endl;

	std::string e = "hola";
	std::string f = "adios";

	std::cout << "e is " << e << " f is " << f << std::endl;
	std::cout << "swap"  << std::endl;
	swap(e, f);
	std::cout << "e is " << e << " f is " << f << std::endl;
	std::cout << "min e and is " << ::min(e, f) << std::endl;
	std::cout << "max e and f is " << ::max(e, f) << std::endl;

/* 	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "swap"  << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "swap"  << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl; */
	return 0;
}