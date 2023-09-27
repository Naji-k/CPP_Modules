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
	Zombie *Foo;
	
	randomChump("Bar");
	Foo = newZombie("Foo");
	Foo->announce();

	delete Foo;
	return (0);
};