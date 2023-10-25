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
#include "FragTrap.hpp"
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

		second.takeDamage(7);
		second.attack("robot");
		second.beRepaired(3);
		a.takeDamage(5);
		for (int i = 0; i < 10; i++)
			a.attack("robot");
		std::cout << green;
	}
	{
		std::cout << red << "<<< ScavTrap >>> " << std::endl;
		std::cout << blue;
		ScavTrap simba("simba");
		std::cout << reset;

		simba.attack("robot");
		simba.takeDamage(15);
		simba.beRepaired(2);
		simba.guardGate();
		std::cout << green;
	}
	{
		std::cout << red << "<<< FragTrap>>> " << std::endl;
		std::cout << blue;

		FragTrap f1("frog");
		FragTrap f2 = FragTrap("rumba");
		std::cout << reset;
		f2.attack("random");
		f2.takeDamage(25);
		f2.beRepaired(10);
		f2.highFivesGuys();

		std::cout << green;
	}

	return 0;
}