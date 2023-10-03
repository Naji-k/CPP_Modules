/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:27:51 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 13:217:51 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"
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