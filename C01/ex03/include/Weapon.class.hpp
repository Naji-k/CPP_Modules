/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 13:14:00 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/03 13:14:00 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <string>

class Weapon
{
  public:
	Weapon();
	Weapon(const std::string &type);
	std::string getType() const;
	void setType(const std::string &type);

  private:
	std::string _type;
};

#endif