/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 13:25:52 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/23 13:25:52 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
}
Point::Point(const Point &other) : _x(other.getX()), _y(other.getY())
{
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		(Fixed) this->_x = other.getX();
		(Fixed) this->_y = other.getY();
	}
	return *(this);
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return _x;
}

Fixed Point::getY() const
{
	return _y;
}

