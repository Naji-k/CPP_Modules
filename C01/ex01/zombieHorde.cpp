/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nakanoun <nakanoun@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/09/27 20:30:40 by nakanoun      #+#    #+#                 */
/*   Updated: 2023/09/27 20:30:40 by nakanoun      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *hordeZombies = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		hordeZombies[i].setName(name);
	}
	return (hordeZombies);
}