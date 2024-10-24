#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

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

void splitString(const std::string& str, char delimiter, std::string result[], const int arraySize)
{
    std::stringstream sStream(str);
    for (int i = 0; i < arraySize; i++)
    {
        if (!std::getline(sStream, result[i], delimiter))
        {
            return;
        }
    }
}