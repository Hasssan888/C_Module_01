#include "HumanB.hpp"

HumanB::HumanB (std::string name)
{
    this->name = name;
    wea = NULL;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    wea = &newWeapon;
}

void HumanB::attack () const 
{
    if (wea)
        std::cout << name << " attacks with their " << wea->getType();
    else
        std::cout << name << " has no weapon!" << std::endl;
}