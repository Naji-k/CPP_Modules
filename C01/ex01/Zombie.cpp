#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void){};

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << _name << " destroyed" << std::endl;
}

void Zombie::setName(std::string &name)
{
	this->_name = name;
}
