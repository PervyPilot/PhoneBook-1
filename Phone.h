#pragma once
#include <string>
using namespace std;

class Phone
{
public:
	string type;
	string number;
	Phone() {}
	Phone(string type, string number) 
	{
		this->type = type;
		this->number = number;
	}
};

