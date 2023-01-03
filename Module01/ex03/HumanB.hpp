#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string nameB;
        Weapon weaponB;

    public:
        std::string getName();
        void setName(std::string newNameB);


};

#endif