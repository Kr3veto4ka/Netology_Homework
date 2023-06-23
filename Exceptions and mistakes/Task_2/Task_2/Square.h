#pragma once

#include "Quad.h"
class Square : public Quad {
public:
	void fig_name() override;

	Square(int a, int b, int c, int d, int A, int B, int C, int D);
};

