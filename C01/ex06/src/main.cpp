/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 18:26:56 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/10/12 18:26:56 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		harl.complain(argv[1]);
	}
	
}