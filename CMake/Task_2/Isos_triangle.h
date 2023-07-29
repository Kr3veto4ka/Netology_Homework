#pragma once
#include "Triangle.h"

class Isos_triangle : public Triangle {
public:
	void fig_name() override;

	Isos_triangle(int a, int c, int A, int C) : Triangle(a, a, c, A, A, C) {};
};