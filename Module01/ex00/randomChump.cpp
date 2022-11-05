#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie *new_one = newZombie(name);
	new_one->announce();
	delete new_one;
}