#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        std::string getName();
        void    setName(std::string newName);
        void    announce();
        ~Zombie();
};

Zombie  *newZombie(int N, std::string name );

#endif