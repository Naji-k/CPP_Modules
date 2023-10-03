/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:18:14 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 13:18:14 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"
#include <iostream>

Weapon::Weapon()
{
}
Weapon::Weapon(const std::string &type): _type(type)
{
}

std::string Weapon::getType(void) const
{
	return (_type);
}

void Weapon::setType(const std::string &type)
{
	this->_type = type;
}