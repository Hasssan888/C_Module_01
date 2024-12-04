#include "Harl.hpp"

int main(int ac, char* av[]) 
{
    if (ac != 2) 
    {
        std::cerr << "Usage: " << av[0] << " <log_level>" << std::endl;
        return 1;
    }

    std::string level = av[1];
    Harl harl;

    int levelCode = -1;

    if (level == "DEBUG") 
        levelCode = 0;
    else if (level == "INFO") 
        levelCode = 1;
    else if (level == "WARNING") 
        levelCode = 2;
    else if (level == "ERROR") 
        levelCode = 3;

    switch (levelCode) 
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}



