#include <iostream>
#include <string>

class Harl {
private:
    // Private member functions for each complaint level
    void debug() {
        std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
    }
    
    void info() {
        std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
    }

    void warning() {
        std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    }

    void error() {
        std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
    }

    // Define a type for a pointer to a member function of Harl
    typedef void (Harl::*HarlFunc)();

public:
    // Public function that maps levels to function pointers and invokes the correct function
    void complain(const std::string& level) {
        // Array of pairs: level names mapped to the corresponding member function pointers
        struct LevelMapping {
            std::string levelName;
            HarlFunc func;
        } levelMappings[] = {
            {"DEBUG", &Harl::debug},
            {"INFO", &Harl::info},
            {"WARNING", &Harl::warning},
            {"ERROR", &Harl::error}
        };

        // Iterate through the mappings to find and call the correct function
        for (const auto& mapping : levelMappings) {
            if (mapping.levelName == level) {
                // Call the function using the member function pointer
                (this->*mapping.func)();
                return;
            }
        }

        // Optional: Handle unknown levels
        std::cout << "Unknown level: " << level << std::endl;
    }
};

int main() {
    Harl harl;
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("UNKNOWN");  // Test with an unknown level
    return 0;
}
