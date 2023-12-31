/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 15:49:38 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/16 15:49:38 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointNumber = 0;
}
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixedPointNumber = other.getRawBits();
	return *(this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}