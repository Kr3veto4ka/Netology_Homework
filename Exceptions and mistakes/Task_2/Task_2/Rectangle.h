#pragma once
#include "Quad.h"

class Rectangle : public Quad {
public:
	void fig_name() override;

	Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};