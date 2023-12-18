/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.class.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 18:16:29 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 18:16:29 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.class.hpp"

int PhoneBook::checkInputs(PhoneBook &book)
{
	std::string prompt[5] = {"First Name ", "Last Name ", "Nick Name",
							 "Phone Number ", "Dark Secret "};
	std::string input[5];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Please Enter The " << prompt[i] << std::endl;
		if (!getline(std::cin, input[i]))
		{
			std::cout << "EOF detected. Exiting.\n";
			return(EXIT_FAILURE);
		}
		if (input[i].empty())
		{
			std::cout << "The input is empty" << std::endl;
			i--;
		}
		if (i == 3)
		{
			for (int j = 0; j < (int)input[i].length(); j++)
			{
				if (std::isdigit(input[i][j]) == 0)
				{
					std::cout << prompt[i] << "should be numbers" << std:: endl;
					i--;
					break;
				}
			}
		}
		if (i != 3 && i > 0)
		{
			for (int j = 0; j < (int)input[i].length(); j++)
			{
				if (std::isalpha(input[i][j]) == 0)
				{
					std::cout << prompt[i] << "should not be numbers" << std:: endl;
					i--;
					break;
				}
			}
		}
	}
	if (!input[0].empty() && !input[1].empty() && !input[2].empty() &&
		!input[3].empty() && !input[4].empty())
	{
		book.add(input[0], input[1], input[2], input[3], input[4]);
	}
	return (EXIT_SUCCESS);
}

void PhoneBook::add(const std::string &fName, const std::string &lName,
					const std::string &nName, const std::string &pNumber,
					const std::string &dSecret)
{
	contacts[_index % 8].newContact(fName, lName, nName, pNumber, dSecret);
	_index++;
};
void PhoneBook::displayPhoneBook(void)
{
	int max = _index;
	if (max == 0)
	{
		std::cout << "The PhoneBook is empty" << std::endl;
		return;
	}
	if (max > _MaxContactNumber)
		max = _MaxContactNumber;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Index";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "First Name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Last Name";
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "Nick Name";
	std::cout << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < max; i++)
	{
		printLine(i);
	}
	PhoneBook::find(max);
};

void PhoneBook::printLine(int i)
{
	std::string str;

	std::cout << "|" << std::setw(10) << std::right << i + 1 << "|";
	str = contacts[i].getFirstName();
	if (str.length() > 9)
	{
		str = str.substr(0, 9) + ".";
	}
	std::cout << std::setw(10) << std::right << str << "|";
	str = contacts[i].getLastName();
	if (str.length() > 9)
	{
		str = str.substr(0, 9) + ".";
	}
	std::cout << std::setw(10) << std::right << str << "|";
	str = contacts[i].getNickName();
	if (str.length() > 9)
	{
		str = str.substr(0, 9) + ".";
	}
	std::cout << std::setw(10) << std::right << str << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::find(int max)
{
	int selected;
	std::string input;

	while (1)
	{
		std::cout << "Choose index from the table \n > ";
		if (!getline(std::cin, input))
		{
			std::cin.clear();
			std::cin.ignore();
			return;
		}
		if (input.length() == 1 && isdigit(input[0]))
		{
			selected = atoi(input.c_str());
			if (selected > max)
				std::cout << "Invalid input ";
			else
			{
				contacts[selected - 1].getContact();
				break;
			}
		}
		else
		{
			std::cout << "Invalid input ";
		}
	}
};
