#include "Leaver.h"

Leaver::Leaver(std::string value)
{
	this->value = value;
}

std::string Leaver::leave()
{
	return "Досвидания, " + value + "!";
}