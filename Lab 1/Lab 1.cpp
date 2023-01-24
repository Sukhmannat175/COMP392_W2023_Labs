// Lab 1.cpp
// Sukhmannat Singh - 301168420
// Scan and print user input

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string name;
	float salary;
	
	cout << "Annual Salary Calculator\n" << endl;
	cout << "Please input your full name: ";
	getline(cin, name);

	cout << "Kindly input your monthly salary: $";
	cin >> salary;

	salary = salary * 12;

	cout << "\nHello! " << name << "I hope you are having a great day!" << endl;
	cout << "Your current annual salary is: $" << fixed << setprecision(2) << salary << endl;
}