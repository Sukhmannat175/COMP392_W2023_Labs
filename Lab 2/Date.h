// Date.h
// Sukhmannat Singh - 301168420

#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
public:
	Date(int year, int month, int day);
	~Date();
	Date operator+(const Date& rhs);
	Date operator+(const int rhs);
	friend ostream& operator<<(ostream& os, const Date& rhs);

private:
	int year_ = 2019;
	int month_ = 1;
	int day_ = 1;
	void normalize();
};

