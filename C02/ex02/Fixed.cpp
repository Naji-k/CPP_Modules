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
#include <cmath>
/*
 The 6 comparison operators: >, <, >=, <=, == and !=.
 The 4 arithmetic operators: +, -, *, and /.
 The 4 increment/decrement
 */
Fixed::Fixed()
{
	this->_fixedPointNumber = 0;
}

Fixed::~Fixed()
{
}
Fixed::Fixed(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->_fixedPointNumber = other.getRawBits();
	}
	return (*(this));
}

Fixed::Fixed(const int i)
{
	this->_fixedPointNumber = i << _fractionalBitsValue;
}

Fixed::Fixed(const float f)
{
	this->_fixedPointNumber = roundf(f * (1 << _fractionalBitsValue));
}

int Fixed::getRawBits(void) const
{
	return (_fixedPointNumber);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNumber = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << _fractionalBitsValue));
}

int Fixed::toInt(void) const
{
	return (static_cast<int>(this->getRawBits()) / (1 << _fractionalBitsValue));
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

// comparison operators
bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}
bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}
bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

// arithmetic operators
Fixed Fixed::operator+(const Fixed &rhs)
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs)
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs)
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed & rhs)
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

// increment-decrement
Fixed &Fixed::operator++()
{
	this->_fixedPointNumber++;
	return *this;
}
Fixed &Fixed::operator--()
{
	this->_fixedPointNumber--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	++(*this);
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	--(*this);
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}