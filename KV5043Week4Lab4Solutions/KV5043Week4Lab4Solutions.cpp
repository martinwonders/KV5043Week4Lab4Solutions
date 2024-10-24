#include <iostream>
#include <fstream>
#include <string>

void readFromFile(const std::string &fileName, std::string &fileContents);

int main() {
    const std::string fileName = "example.txt";
    std::string fileContents;

    readFromFile(fileName, fileContents);

    std::cout << "The contents of the file " << fileName << " are:\n" << std::endl;
    std::cout << fileContents << std::endl;
    return 0;
}

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