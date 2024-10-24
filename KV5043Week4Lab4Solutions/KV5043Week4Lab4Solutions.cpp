#include <iostream>
#include <fstream>
#include <string>

void readFromFile(std::string fileName);

int main()
{
    const std::string fileName = "example.txt";
    readFromFile(fileName);
    std::cout << fileName << std::endl;
	return 0;
}

void readFromFile(std::string fileName)
{
    fileName = "different.txt";
    std::ifstream inputFile(fileName);

    if (!inputFile.is_open())
    {
        std::cerr << "Error: " << fileName << " could not be opened." << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        std::cout << line << std::endl;
    }

    inputFile.close();
}