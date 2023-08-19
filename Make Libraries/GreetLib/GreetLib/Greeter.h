#pragma once
#include <string>
#include <iostream>
class Greeter
{
public:
	std::string greet();

	Greeter(std::string value);

private:
	std::string value;
};

