#pragma once
#include <string>

namespace FileHandling
{
	const std::string FILE_NAME = "example.txt";
}

void readFromFile(const std::string& fileName, std::string& fileContents);
