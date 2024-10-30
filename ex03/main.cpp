#include "Weapon.hpp"

int main() {
    // Create a Weapon object with an initial type
    Weapon myWeapon("Sword");

    // Display the weapon type using getType()
    std::cout << "Weapon type: " << myWeapon.getType() << std::endl;

    // Change the weapon type using setType()
    myWeapon.setType("Axe");

    // Display the updated weapon type
    std::cout << "Updated weapon type: " << myWeapon.getType() << std::endl;

    return 0;
}