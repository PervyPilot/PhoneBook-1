#pragma once
#include <string>
using namespace std;

class Address
{
public:
	string type;
	string country;
	string city;
	string street;
	string house;
	Address(){}
	Address(string type, string country, string city, string street, string house) 
	{
	this->type=type;
	this->country= country;
	this->city= city;
	this->street= street;
	this->house= house;
	}
};

