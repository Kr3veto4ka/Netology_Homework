#include "FigExceptions.h"

FigExceptions::FigExceptions(std::string exception) {
	this->exception = exception;
}

const char* FigExceptions::what() const {
	return exception.c_str();
}