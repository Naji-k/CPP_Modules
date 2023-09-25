#include <iostream>
#include <cstdlib>
#include "PhoneBook.class.hpp"

int main(void)
{
	PhoneBook book1;
	std::string str;
	std::string order;

	std::cout << "Welcome to PhoneBook: use " << std::endl;
	std::cout << "ADD:\tto add new contact\nSEARCH:\tto search for a contact\nEXIT:\tto exit from the program\n";
	while (order.compare("EXIT"))
	{
		std::cout << "choose: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "> " << std::flush;
		if (std::cin >> order == 0)
			break;
		if (order == "ADD")
			if (!book1.checkInputs(book1))
				break;
			else
				continue;
		else if (order == "SEARCH")
		{
			book1.search();
		}
		else if (order == "EXIT")
			exit(0);
		else if (order == "DISPLAY")
			book1.displayPhoneBook();
		else
			std::cout << "Wrong input" << std::endl;
	}
	return (0);
};