#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string nameA;
        Weapon &weaponA;

    public:
        HumanA(Weapon &newWeapon);
        std::string getName();
        void setName(std::string newNameA);
};

#endif