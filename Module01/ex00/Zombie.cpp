#include "Zombie.hpp"

std::string Zombie::getName()
{
	return(name);
}

void	Zombie::setName(std::string newName)
{
	name = newName;
}

void Zombie::announce(void)
{
	std::cout  << getName() << ":" << " BraiiiiiiinnnzzzZ" << std::endl;
}


Zombie::Zombie(std::string name)
{
	setName(name);
}


Zombie::~Zombie(void)
{
	std::cout  << getName() << ":" << " die." << std::endl;
}