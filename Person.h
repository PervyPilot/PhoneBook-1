#pragma once
#include <string>
using namespace std;
#include "FIO.h"
#include "Date.h"
class Person
{
	
public:
	FIO name;
	Date dateOfBirth;
    string pathToPhoto;
	Person (){}
	Person(FIO name, Date dateOfBirth, string pathToPhoto) 
	{
		this->name = name;
		this->dateOfBirth = dateOfBirth;
		this->pathToPhoto = pathToPhoto;
	}
};

