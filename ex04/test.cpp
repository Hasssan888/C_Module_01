#include <iostream>
#include <string>
#include <fstream>
#include <deque>

int main()
{
    std::fstream myFile;
    
    myFile.open("file.txt", std::ios::in); // read

    if (myFile.is_open())
    {
        std::string line;
        while (getline(myFile, line))
            std::cout << line << std::endl;
        myFile.close();
    }

    // myFile.open("file.txt", std::ios::out); // write
    // if (myFile.is_open())
    // {
    //     myFile << "Hello\n";
    //     myFile << "This is second line\n";
    //     myFile.close();
    // }

    // myFile.open("file.txt", std::ios::app); // write
    // if (myFile.is_open())
    // {
    //     myFile << "Hello\n";
    //     myFile << "This is car f1 line\n";
    //     myFile.close();
    // }

}

