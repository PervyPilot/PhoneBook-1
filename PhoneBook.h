#pragma once
#include <vector>
#include "RecordPhoneBook.h"
using namespace std;

class PhoneBook
{
public:
	vector<RecordPhoneBook> records;
	PhoneBook(){}
	PhoneBook(vector<RecordPhoneBook> records) { this->records = records; }
};

