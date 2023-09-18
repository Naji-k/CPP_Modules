#include "PhoneBook.class.hpp"
#include <iostream>

void PhoneBook::add(const std::string &fName, const std::string &lName,
		const std::string &nName, const std::string &pNumber,
		const std::string &dSecret)
{
	if (index < MaxContactNumber)
	{
		contacts[index].newContact(fName, lName, nName, pNumber, dSecret);
		index++;
	}
	else
	{
		std::cout << "more than 8 contacts" << std::endl;
	}
};
void PhoneBook::displayPhoneBook(void)
{
	for (int i = 0; i < index; i++)
		contacts[i].getContact();
}
