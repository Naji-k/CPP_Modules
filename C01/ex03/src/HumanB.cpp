/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 22:43:11 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 22:43:11 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name)
	: _name(name)
{
	this->weapon = NULL;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
void HumanB::attack()
{
	if (this->weapon != NULL)
	{
		std::cout << _name << " attacks with their " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " does not have weapon" << std::endl;
	}
}
HumanB::~HumanB() {}