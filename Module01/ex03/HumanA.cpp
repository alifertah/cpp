#include "HumanA.hpp"

HumanA::HumanA(Weapon &newWeapon):_weapon(newWeapon)
{
    std::cout << "HUMAN A WEAPON INITTED" << std::endl;
}

std::string HumanA::getName()
{
    return this->name;
}