#pragma once
#include <iostream>

class Figure {
public:
	Figure() = default;
	virtual void fig_name() {};
	virtual void print_info() {};
};