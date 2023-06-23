#pragma once
#include "Quad.h"

class Rhombus : public Quad {
public:
	void fig_name() override;

	Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};

