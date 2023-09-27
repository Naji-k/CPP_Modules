/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 17:47:59 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 17:47:59 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	zombies = zombieHorde(3, "HARDI");

	for (int i = 0; i < 3; i++)
	{
		zombies[i].announce();
	}
	
	delete[] zombies;

	return (0);
};