// Date.cpp
// Sukhmannat Singh - 301168420

#pragma once
#include <string>
#include <iostream>
#include <iomanip>

#include "Date.h"

using namespace std;

Date::Date(int year, int month, int day)
{
	year_ = year;
	month_ = month;
	day_ = day;
	cout << "constructor\n";
}

Date::~Date()
{
	cout << "destructor\n";
}

Date Date::operator+(const Date& rhs)
{
	return { year_ + rhs.year_, month_ + rhs.month_, day_ + rhs.day_ };

}

Date Date::operator+(const int rhs)
{
	return { year_, month_, day_ + rhs };
}

ostream& operator<<(ostream& os, const Date& rhs)
{
	return os << "<" << rhs.year_ << "-" << rhs.month_ << "-" << rhs.day_ << ">";
}

void Date::normalize()
{
	if (day_ > 30)
	{
		month_ += day_ / 30;
		day_ = day_ % 30;
	}
	if (month_ > 12)
	{
		year_ += month_ / 12;
		month_ = month_ % 12;
	}
}

