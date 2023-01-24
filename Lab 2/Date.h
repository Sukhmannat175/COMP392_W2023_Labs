// Lab 1.cpp
// Sukhmannat Singh - 301168420
// Scan and print user input

#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
public:
	Date(int year, int month, int day)
	{
		year_ = year;
		month_ = month;
		day_ = day;
		cout << "constructor\n";
	}

	~Date()
	{
		cout << "destructor\n";
	}

	Date operator+(const Date& rhs)
	{
		Date output(year_ + rhs.year_, month_ + rhs.month_, day_ + rhs.day_);
		normalize(output);
		return{output};
	}
	Date operator+(const int rhs)
	{
		Date output(year_, month_, day_ + rhs);
		normalize(output);
		return{output};
	}
	friend ostream& operator<<(ostream& os, const Date& rhs)
	{
		os << "<" << rhs.year_ << "-" << rhs.month_ << "-" << rhs.day_ << ">";
		return os;
	}

private:
	int year_ = 2019;
	int month_ = 1;
	int day_ = 1;
	void normalize(Date& date)
	{
		if (date.day_ > 30)
		{
			date.month_ += date.day_ / 30;
			date.day_ = date.day_ % 30;
		}
		if (date.month_ > 12)
		{
			date.year_ += date.month_ / 12;
			date.month_ = date.month_ % 12;
		}
	}
};

