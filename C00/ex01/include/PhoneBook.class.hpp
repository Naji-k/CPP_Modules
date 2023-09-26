#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"
#include <string>

class PhoneBook
{
public:
	PhoneBook() : _index(0){};
	void add(const std::string &fname, const std::string &fName, const std::string &nName,
			 const std::string &pNumber, const std::string &dSecret);
	void search(void);
	void displayPhoneBook();
	void checkInputs(PhoneBook &book);
	void find(int max);
	void printLine(int i);

private:
	static const int _MaxContactNumber = 8;
	int _index;
	Contact contacts[_MaxContactNumber];
};

#endif