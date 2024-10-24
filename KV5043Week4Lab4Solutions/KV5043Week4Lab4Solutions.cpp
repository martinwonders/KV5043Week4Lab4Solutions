#include <iostream>
#include <string>
#include "filehandling.h"

int main() {
    const std::string fileName = "example.txt";
    std::string fileContents;

    readFromFile(fileName, fileContents);

    std::cout << "The contents of the file " << fileName << " are:\n" << std::endl;
    std::cout << fileContents << std::endl;
    return 0;
}

