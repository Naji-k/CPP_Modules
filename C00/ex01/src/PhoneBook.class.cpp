#include "PhoneBook.class.hpp"
#include <iostream>

void PhoneBook::checkInputs(PhoneBook book)
{
	std::string prompt[5] = {"First Name", "Last Name", "Nick Name",
							 "Phone Number ", "Dark Secret "};
	std::string input[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please Enter The " << prompt[i] << std::endl;
		getline(std::cin, input[i]);

		if (input[i].empty())
		{
			std::cout << "The input is empty\n";
			i--;
		}
	}
	if (!input[0].empty() && !input[1].empty() && !input[2].empty(),
		!input[3].empty(),
		!input[4].empty())
	{
		book.add(input[0], input[1], input[2], input[3], input[4]);
	}
	book.displayPhoneBook();
}

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

