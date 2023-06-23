#pragma once
#include "Triangle.h"

class Isos_triangle : public Triangle {
public:
	void fig_name() override;

	Isos_triangle(int a, int b, int c, int A, int B, int C);
};