#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "";
}

Zombie::Zombie(std::string zombieName)
{
    name = zombieName;
    std::cout << "Zombie object " << name << " created" << std::endl;
}

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

void    Zombie::setName(std::string zombieName)
{
    name = zombieName;
}