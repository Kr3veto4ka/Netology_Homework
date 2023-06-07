#pragma once
#include "Figure.h"

class Quad : public Figure {
public:
	Quad(int a, int b, int c, int d, int A, int B, int C, int D)
		: a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {};

	void fig_name() override;

	void print_info() override;

protected:
	int a, b, c, d;
	int A, B, C, D;
};

