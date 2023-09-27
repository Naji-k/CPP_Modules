#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string &name)
{
	this->_name = name;
};

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << _name << " destroyed" << std::endl;
}

