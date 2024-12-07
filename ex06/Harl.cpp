#include "Harl.hpp"

int level_trans(std::string level) {
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
            return i;
    }
    return -1;

}

void Harl::complain(std::string level) 
{
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    switch (level_trans(level))
    {
        case 0:
            (this->*functions[0])();
        case 1:
            (this->*functions[1])();
        case 2:
            (this->*functions[2])();
        case 3:
            (this->*functions[3])();
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

void Harl::debug() 
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
    std::cout << std::endl;
}

void Harl::info() 
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning() 
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void Harl::error() 
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}
