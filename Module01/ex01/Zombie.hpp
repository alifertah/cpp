#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce();
        void setName(std::string name_);
};

Zombie* zombieHorde( int N, std::string name );

#endif