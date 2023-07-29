#pragma once
#include "Triangle.h"

class Rect_triangle : public Triangle {
public:
	void fig_name() override;

	Rect_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {};
};

