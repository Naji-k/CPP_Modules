#include <iostream>
#include "PhoneBook.class.hpp"

bool PhoneBook::checkInputs(PhoneBook &book)
{
	std::string prompt[5] = {"First Name", "Last Name", "Nick Name",
							 "Phone Number ", "Dark Secret "};
	std::string input[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please Enter The " << prompt[i] << std::endl;
		std::getline(std::cin, input[i]);

		if (input[i].empty())
		{
			std::cout << "The input is empty\n";
			i--;
		}
	}
	if (!input[0].empty() && !input[1].empty() && !input[2].empty() &&
		!input[3].empty() && !input[4].empty())
	{
		book.add(input[0], input[1], input[2], input[3], input[4]);
	}
	return (true);
}

void PhoneBook::add(const std::string &fName, const std::string &lName,
					const std::string &nName, const std::string &pNumber,
					const std::string &dSecret)
{
	contacts[index % 8].newContact(fName, lName, nName, pNumber, dSecret);
	index++;
};
void PhoneBook::displayPhoneBook(void)
{
	int max = index;
	if (max > MaxContactNumber)
		max = MaxContactNumber;
	for (int i = 0; i < max; i++)
		contacts[i].getContact();
};
void PhoneBook::search(void)
{
	std::string str;
	std::cout << "Searching for: >" << std::endl;
	if (!std::getline(std::cin, str))
	{
		if (std::cin.eof())
		{
			std::cout << "EOF detected. Exiting." << std::endl;
		}
		else
		{
			std::cerr << "Input error occurred." << std::endl;
		}
	}
	if (str.empty())
	std::cout << "str in empty\n";
	std::cout << "input is " << str << std::endl;

	// PhoneBook::find(input, book);
}

bool PhoneBook::find(const std::string &key, PhoneBook &book)
{
	std::cout << "key=" << key << std::endl;
	for (int i = 0; i < (index % 8); ++i)
	{
		const std::string &fName = book.contacts[i].getName();

		if (fName.find(key) != std::string::npos)
			book.contacts[i].getContact();
		else
			std::cout << "Contact Not found\n";
	}
	return false;
};
