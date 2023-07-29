#pragma once

#include "Figure.h"

class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C)
		: a(a), b(b), c(c), A(A), B(B), C(C) {};

	void fig_name() override;

	void print_info() override;

protected:
	int a, b, c;
	int A, B, C;
};
