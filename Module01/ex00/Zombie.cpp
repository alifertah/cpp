#include "Zombie.hpp"

std::string Zombie::getName()
{
    return(this->name);
}

void    Zombie::setName(std::string newName)
{
    this->name = newName;
}

Zombie::~Zombie()
{
    std::cout << "[" << getName() << "] " << "die." << std::endl;
}

Zombie  *newZombie(int N, std::string name )
{
    if (N <= 0)
		return (NULL);
		
	Zombie *zombie_horde = new Zombie[N];

	for (int i=0; i<N; i++)
	{
		zombie_horde[i].setName(name);
	}
	return (zombie_horde);
}

void    Zombie::announce()
{
    std::cout << getName() << " :";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}