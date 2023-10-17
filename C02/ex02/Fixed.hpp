/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 15:45:08 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/16 15:45:08 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int _fixedPointNumber;
	static const int _fractionalBitsValue = 8;

  public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	static const Fixed& min(Fixed& a, Fixed&b);
	static const Fixed& min(const Fixed& a,const Fixed&b);

	static const Fixed& max(Fixed& a, Fixed&b);
	static const Fixed& max(const Fixed& a,const Fixed&b);

};
std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif
