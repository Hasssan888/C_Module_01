// #include "openfile.hpp"
#include <iostream>
#include <string>
#include <fstream>

void    print_error()
{
    std::cout << "Error !!!" << std::endl;
    exit(1);
}

std::string* cpyargv(int ac, char **av)
{
    std::string* args = new std::string[ac - 1];

    int i = 1;

    while (i < ac)
    {
        args[i - 1] = av[i];
        i++;
    }
    return (args);
}


void replace_str(std::string& line, const std::string& s1, const std::string& s2)
{
    size_t pos = 0;
    while ((pos = line.find(s1, pos)) != std::string::npos) // Find occurrences of s1
    {
        line.erase(pos, s1.length()); // Remove s1
        line.insert(pos, s2); // Insert s2
        pos += s2.length(); // Move past the new string
    }
}

int main(int ac, char **av)
{
    std::string* args;
    std::fstream myFile;
    std::string line;
    std::string fileReplace;
    
    args = cpyargv(ac, av);
    if (ac == 4)
    {
        myFile.open(args[0], std::ios::in);
        fileReplace = std::string(args[0]) + ".replace";
        if (myFile.is_open())
        {
            std::ofstream file(fileReplace);
            
                while (getline(myFile, line))
                {
                    replace_str(line, args[1], args[2]);
                    file <<  line << std::endl;
                }
        }
        else
            print_error();
    }
    else
        print_error();

}