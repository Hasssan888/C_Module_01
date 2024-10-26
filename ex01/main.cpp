#include "Zombie.hpp"

int main()
{
    int N = 3;
    std::string name = "HordeZombie";
    int i;

    Zombie *horde = zombieHorde(N, name);

    if (horde != NULL)
    {
        i = 0;
        while (i < N)
        {
            horde[i].announce();
            i++;
        }
        delete[] horde;
    }
    else
        std::cerr << "Failed to create zombie horde!" << std::endl;

}