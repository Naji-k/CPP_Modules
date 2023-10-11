/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sed.class.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 16:49:30 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/11 16:49:30 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SED_CLASS_HPP
# define SED_CLASS_HPP

# include <string>

class Sed
{
  private:
	std::string _ifName;
	std::string _ofName;

  public:
	Sed();
	Sed(const std::string &infile);
	~Sed();
	void replace(const std::string &toFind,const std::string &toReplace);
};

#endif