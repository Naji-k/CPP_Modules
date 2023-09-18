#include "Contact.class.hpp"
#include <iostream>

void Contact::newContact(const std::string &fName, const std::string &lName,
		const std::string &nName, const std::string &pNumber, const std::string &dSecret)
{
	this->firstName = fName;
	this->lastName = lName;
	this->nickName = nName;
	this->phoneNumber = pNumber;
	this->darkSecret = dSecret;
};
void Contact::getContact()
{
	std::cout << "full name is: " << firstName << " " << lastName << " phone number: " << phoneNumber << std::endl;
};
