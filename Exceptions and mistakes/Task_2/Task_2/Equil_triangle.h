#pragma once
#include "Triangle.h"

class Equil_triangle : public Triangle {
public:
	void fig_name() override;

	Equil_triangle(int a, int b, int c, int A, int B, int C);
};