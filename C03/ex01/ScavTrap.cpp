/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 20:44:29 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/24 20:44:29 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	ClapTrap();
	std::cout << "Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
	: ClapTrap(other)
{
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this != &rhs)
	{
		ClapTrap::operator=(rhs); // call the parent class assignment operator
	}
	return (*this);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
