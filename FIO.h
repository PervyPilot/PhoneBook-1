#pragma once
#include <string>
using namespace std;

class FIO
{
public:
	string firstName;
    string lastName;
	string patronymic;
	FIO() {}
	FIO(string firstName, string lastName, string patronymic)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		this->patronymic = patronymic;
	}
};

