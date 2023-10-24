/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 19:09:29 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/23 19:09:29 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap(const std::string &name) : _name(name),_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttackDamage();
	}
	return (*(this));
}

ClapTrap::~ClapTrap()
{
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap)
{
	out << "ClapTrap " << clap.getName();
	return out;
}

int ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}
int ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}
int ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}

std::string ClapTrap::getName(void) const
{
	return (_name);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints || this->_energyPoints)
	{
		std::cout << *this << " attacks " << target << ", causing 1 points of damage!" << std::endl;
		this->takeDamage(1);
	}
	else
		std::cout << this->getName() << " has no energy points or hits points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	this->_energyPoints -= 1;
	std::cout << "ePoint= " << this->getEnergyPoints() << std::endl;
	std::cout << "hPoint= " << this->getHitPoints() << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
}