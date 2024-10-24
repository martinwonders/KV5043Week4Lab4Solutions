#pragma once
#include <string>

namespace FileHandling
{
	const std::string FILE_NAME = "example.txt";
	const char DELIMETER = ',';
}

void readFromFile(const std::string& fileName, std::string& fileContents);
void splitString(const std::string& str, char delimiter, std::string result[], const int arraySize);
