#pragma once
using namespace std;

class Date
{
public:
	int year;
	int month;
	int day;
	Date() {}
	Date(int year, int month, int day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}
};

