#include "Zombie.hpp"

void Zombie::setName(std::string name_)
{
    this->name = name_;
}

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}