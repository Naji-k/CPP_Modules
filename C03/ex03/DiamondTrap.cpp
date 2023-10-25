/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 15:17:17 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/25 15:17:17 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	_name = "EMPTY";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Diamond " << this->_name << " DefaultConstructor called ClapTrap Name= " << this->getName() << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		ClapTrap::operator=(rhs);
		std::cout << "Diamond " << this->_name << " assignment operator called" << std::endl;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap("_clap_name_" + name), _name(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
	std::cout << "Diamond " << this->_name << " Copy Constructor called ClapTrap name=  " << this->getName() << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond " << this->_name << " Deconstructor called ClapTrap name=  " << this->getName() << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap with name= " << this->_name << " ClapTrap name= " << this->getName() << "\n\t hitPoints= " << this->_hitPoints << " energyPoints= " << this->_energyPoints << " attackDamage= " << this->_attackDamage << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}
