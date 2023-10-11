/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 15:45:10 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/10 15:45:10 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.class.hpp"
#include <fstream>
#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		Sed sed(argv[1]);
		sed.replace(argv[2], argv[3]);
	}
	else
	{
		std::cout << "Number of arguments is not 4" << std::endl;
		std::cout << "./main <filename> <s1> <s2>" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}