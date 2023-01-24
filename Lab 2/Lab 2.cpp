// Lab 2.cpp
// Sukhmannat Singh - 301168420

#include <string>
#include <iostream>
#include <iomanip>

#include "Date.h"

int main()
{
	std::cout << "\ncreating an anonymous object - 1\n";
	std::cout << Date(2019, 1, 1) << '\n';
	std::cout << "\ncreating a named object - 2\n";
	Date d1(2020, 3, 28);
	std::cout << d1 << '\n';
	std::cout << "\ncreating another named object - 3\n";
	Date d2(2, 10, 14);
	std::cout << d2 << '\n';
	std::cout << "\ncreating another named object - 4\n";
	Date d3 = d1 + d2;
	std::cout << d1 << " + " << d2 << " = " << d3 << '\n';
	int days = 84;
	//setting a new object to d3
	std::cout << "\nsetting a new object to an existing variable\n";
	d3 = d2 + days;
	std::cout << d2 << " + " << days << " = " << d3 << '\n';
	std::cout << d1 << '\n';
	std::cout << d2 << '\n';
	std::cout << d3 << '\n';
}