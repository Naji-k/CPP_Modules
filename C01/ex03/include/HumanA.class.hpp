/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:20:13 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 13:20:13 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMAN_CLASS_HPP
# define HUMAN_CLASS_HPP

# include "Weapon.class.hpp"

class HumanA
{
  public:
	HumanA(const std::string &name, Weapon &weapon_type);
	void attack(void) const;

  private:
	std::string _name;
	Weapon &_weapon;
};
#endif