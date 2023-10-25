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

ClapTrap::ClapTrap()
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << *this << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
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
	std::cout << *this << " deconstructor called" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap)
{
	out << "ClapTrap " << clap.getName();
	return (out);
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
	if (this->_hitPoints && this->_energyPoints)
	{
		this->_energyPoints--;
		std::cout << *this << " attacks " << target << " ,causing " << _attackDamage << " points of damage!\n\t energyPoints= " << getEnergyPoints() << " hitPoints= " << getHitPoints() << std::endl;
	}
	else
		std::cout << *this << " has no energy points or hits points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints && this->_energyPoints)
	{
		this->_hitPoints -= amount;
		this->_energyPoints -= 1;
		std::cout << *this << " takes " << amount << " points of damage! \n\t energyPoints= " << getEnergyPoints() << " hitPoints= " << getHitPoints() << std::endl;
	}
	else
		std::cout << *this << " has no energy or hits points left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0)
	{
		std::cout << *this << " has no energy points left to repair! \n\t energyPoints= " << getEnergyPoints() << " hitPoints= " << getHitPoints() << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints -= 1;
	std::cout << *this << " repaired with " << amount << " hit points! \n\t energyPoints= " << getEnergyPoints() << " hitPoints= " << getHitPoints() << std::endl;
}