#include "Greeter.h"

std::string Greeter::greet()
{
	setlocale(LC_ALL, "Rus");
	std::string newValue = "������������, " + value + "!";
	return newValue;
}

Greeter::Greeter(std::string value)
{
	this->value = value;
}