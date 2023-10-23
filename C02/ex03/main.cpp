/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 22:25:17 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/16 22:25:17 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

int main(void)
{

	Point a(1.0, 1.0);
	Point b(-1.0, 1.0);
	Point c(0, -2.0);
	Point pointOut(-2.0, -2.0); // outside
	Point pointIn(0.5, 0.5);	// inside

	if (pointOut.bsp(a, b, c, pointOut))
	{
		std::cout << "PointOut inside the triangle" << std::endl;
	}
	else
	{
		std::cout << "PointOut outside the triangle" << std::endl;
	}
	if (pointIn.bsp(a, b, c, pointIn))
	{
		std::cout << "pointIn inside the triangle" << std::endl;
	}
	else
	{
		std::cout << "pointIn outside the triangle" << std::endl;
	}

	return 0;
}