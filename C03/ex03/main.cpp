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

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	const char *red = "\033[1;31m";   // Red text
	const char *green = "\033[1;32m"; // Green text
	const char *blue = "\033[1;34m";
	const char *reset = "\033[0m"; // Reset text color to default
	
		std::cout << red << "<<< DiamondTrap >>> " << std::endl;
		// std::cout << blue;
		// // DiamondTrap diamond;

		// DiamondTrap diamond("Sally");
		// std::cout << reset;

		// diamond.whoAmI();

		// std::cout << green;

		std::cout << blue;
		DiamondTrap cody("Cody");
		DiamondTrap rambo("rambo");

		std::cout << reset;
		cody.whoAmI();
		rambo.whoAmI();
		cody = rambo;
		rambo.whoAmI();
		std::cout << red << "<<< ATTACK >>> " <<  reset << std::endl;

		cody.attack("robot");
		cody.takeDamage(10);
		cody.beRepaired(10);
		std::cout << green;
	
}