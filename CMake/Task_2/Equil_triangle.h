#pragma once
#include "Triangle.h"

class Equil_triangle : public Triangle {
public:
	void fig_name() override;

	Equil_triangle(int a) : Triangle(a, a, a, 60, 60, 60) {};
};