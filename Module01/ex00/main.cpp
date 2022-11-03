#include "Zombie.hpp"

int main()
{

	Zombie *_zombie;
	int count = 3;
	
	_zombie = newZombie(count, "monster");
	for(int i=0; i<count; i++)
	{
		_zombie->announce();
	}
	delete[] _zombie;

	return (0);
}