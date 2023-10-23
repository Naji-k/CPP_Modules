/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/23 13:24:15 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/23 13:24:15 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point();
	Point(const float x, const float y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	Fixed getX() const;
	Fixed getY() const;

	bool bsp(Point const a, Point const b, Point const c, Point const point);
	Fixed area( Point const a, Point const b, Point const c);
};

#endif