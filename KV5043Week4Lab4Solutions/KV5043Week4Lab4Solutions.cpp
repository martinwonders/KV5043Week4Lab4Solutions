#include <iostream>
#include <string>
#include "filehandling.h"

int main() {
    
    std::string fileContents;

    readFromFile(FileHandling::FILE_NAME, fileContents);

    std::cout << "The contents of the file " << FileHandling::FILE_NAME << " are:\n" << std::endl;
    std::cout << fileContents << std::endl;
    return 0;
}

