#include <iostream>
#include <string>
#include "filehandling.h"

int main() {
    
    std::string fileContents;

    readFromFile(FileHandling::FILE_NAME, fileContents);

    std::cout << "The contents of the file " << FileHandling::FILE_NAME << " are:\n" << std::endl;
    std::cout << fileContents << std::endl;

    std::string tokens[5];
    splitString("My Window, 100, 100, 300, 600", ',', tokens, 5);
    for (std::string token : tokens)
    {
        std::cout << token << std::endl;
    }
    return 0;
}

