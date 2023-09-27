/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 18:16:26 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 18:16:26 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.class.hpp"

int main(void)
{
	PhoneBook book1;
	std::string str;
	std::string order;

	std::cout << "Welcome to PhoneBook Choose " << std::endl;
	std::cout << "ADD:\tto add new contact\nSEARCH:\tto search for a contact\nEXIT:\tto exit from the program";
	while (true)
	{
		std::cout << "\n> ";
		if (!std::getline(std::cin, order))
		{
			std::cin.clear();
			break;
		}
		if (order.compare("ADD") == 0)
			book1.checkInputs(book1);
		else if (order.compare("SEARCH") == 0)
		{
			book1.displayPhoneBook();
		}
		else if (order.compare("EXIT") == 0)
			exit(0);
		else
		{
			std::cout << "Wrong input" << std::endl;
		}
		std::cout << "choose: ADD, SEARCH, EXIT ";
	}
	return (0);
};