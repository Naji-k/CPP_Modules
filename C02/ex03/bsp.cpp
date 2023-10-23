/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 14:23:44 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/23 14:23:44 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// to know if a point related to a triangle, calculate the area of the Main triangle,
// then calculate area for sub-triangles
//  if the point is related to the triangle, so the total of sub-triangles should be equal to area of main triangle

static Fixed abs(Fixed value)
{
	if (value < 0)
		return (value * -1);
	else
		return (value);
}
Fixed Point::area(Point const a, Point const b, Point const c)
{
	return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
}

// a, b, c: The vertices of our beloved triangle.
// point: The point to check
// if it's inside triangle return true

bool Point::bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed mainArea = abs(area(a, b, c));
	Fixed p1 = abs(area(point, b, c));
	Fixed p2 = abs(area(point, a, c));
	Fixed p3 = abs(area(point, a, b));

	if (mainArea == p1 + p2 + p3)
		return (true);
	return (false);
}
