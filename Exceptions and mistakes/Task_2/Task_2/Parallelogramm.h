#pragma once
#include "Quad.h"

class Parallelogramm : public Quad {
public:
	void fig_name() override;

	Parallelogramm(int a, int b, int c, int d, int A, int B, int C, int D);
};

