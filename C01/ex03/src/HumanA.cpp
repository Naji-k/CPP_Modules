/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 15:06:47 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/04 15:06:47 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon_type)
	: _name(name), _weapon(weapon_type)
{
}
void HumanA::attack(void) const
{
	if (_weapon.getType() != "")
		std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
	else
		std::cout << _name << "Does not have weapon" << std::endl;
}

HumanA::~HumanA() {}