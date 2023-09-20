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
		std::cout << "> " << std::flush;
		if (std::cin >> order == 0)
			break;
		if (order == "ADD")
			book1.checkInputs(book1);
		else if (order == "SEARCH")
			std::cout << "call method SEARCH" << std::endl;
		else if (order == "EXIT")
			exit(0);
		else
			std::cout << "Wrong input" << std::endl;
		std::cout << "choose: ADD, SEARCH, EXIT" << std::endl;
	}
	return (0);
};