#include "Harl.hpp"

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon..." << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more..." << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve some extra bacon for free..." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    typedef void (Harl::*HarlFunc)(); // Define a type for pointer to member functions
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlFunc functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])(); // Call the corresponding function
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}