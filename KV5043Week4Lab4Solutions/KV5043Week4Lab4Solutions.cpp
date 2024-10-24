#include <iostream>
#include <sstream>
#include <string>

bool StringToBool(std::string boolString);

int main()
{
	std::stringstream sStream("true, false, test, false\n");
	std::string boolString;
	bool boolArray[4] = {};

	for (int i = 0; std::getline(sStream, boolString, ','); i++)
	{
		boolArray[i] = StringToBool(boolString);
	}

	for (bool value : boolArray)
	{
		std::cout << value << std::endl;
	}
}

bool StringToBool(std::string boolString)
{
	bool result = false;
	if (boolString == "true")
	{
		result = true;
	}
	return result;
}
