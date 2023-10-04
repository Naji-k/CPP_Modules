/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:20:11 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 13:20:11 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  public:
	HumanB(const std::string &name);
	void setWeapon(Weapon &weapon);
	void attack(void);

  private:
	std::string _name;
	Weapon *weapon;
};
#endif