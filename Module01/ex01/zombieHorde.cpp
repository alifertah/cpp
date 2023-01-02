#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N == 0)
        return NULL;
    
    Zombie *_zombieHorde = new Zombie[N];
    
    for(int i =0; i < N; i++)
    {
        _zombieHorde[i].setName(name);
    }   
    return (_zombieHorde);
}