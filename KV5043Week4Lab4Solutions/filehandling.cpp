#include <string>
#include <fstream>
#include <iostream>

void readFromFile(const std::string& fileName, std::string& fileContents)
{
    std::ifstream inputFile(fileName);

    if (!inputFile.is_open())
    {
        std::cerr << "Error: " << fileName << " could not be opened." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        fileContents += line + '\n';
    }

    inputFile.close();
}