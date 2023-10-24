/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 16:48:16 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/24 16:48:16 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	const char *red = "\033[1;31m";	  // Red text
	const char *green = "\033[1;32m"; // Green text
	const char *blue = "\033[1;34m";
	const char *reset = "\033[0m"; // Reset text color to default
	{
		std::cout << blue;
		ClapTrap a;
		ClapTrap first ("first");
		std::cout << red;
		a = first;
		std::cout << reset;
		ClapTrap second("Second");
		std::cout << reset;

		a.takeDamage(5);
		a.attack("robot");
		second.takeDamage(7);
		second.attack("robot");
		second.beRepaired(3);
		std::cout << green;
	}
	{

		std::cout << red << "<<< ScavTrap >>> " << std::endl;
		std::cout << blue;
		ScavTrap simba("simba");
		std::cout << reset;

		simba.attack("robot");
		simba.guardGate();
		std::cout << green;
	}

	return 0;
}