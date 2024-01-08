/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 00:01:12 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/12 00:01:12 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
/// @brief complain is a public member function calls member functions depending on the level passed
/// @param level

void Harl::complain(std::string level)
{
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			index = i;
			break;
		}
	}
	if (index >= 0 && index < 4)
	{
		while (index < 4)
		{
			std::cout << "[ " + levels[index] + " ]" << std::endl;
			switch (index)
			{
			case 1:
				debug();
				break;
			case 2:
				info();
				break;
			case 3:
				warning();
				break;
			case 4:
				error();
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
				break;
			}
			index++;
		}
	}
	else
		std::cout << "Unknown level: " << level << std::endl;
}
