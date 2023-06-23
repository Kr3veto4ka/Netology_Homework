#pragma once
#include <iostream>

class FigExceptions : public std::exception {
protected:
	std::string exception;

public:
	FigExceptions(std::string exception);
	virtual const char* what() const override;
};

