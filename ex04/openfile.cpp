#include "openfile.hpp"

void replaceAndWrite(const std::string &filename, const std::string &s1, const std::string &s2) 
{
    std::ifstream inputFile(filename.c_str()); // Convert to const char*
    if (!inputFile) {
        std::cerr << "Error: Cannot open file " << filename << std::endl;
        return;
    }

    std::ofstream outputFile((filename + ".replace").c_str()); // Convert to const char*
    if (!outputFile) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            pos += s2.length();
        }
        outputFile << line << '\n';
    }
}
