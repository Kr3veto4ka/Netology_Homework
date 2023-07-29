#pragma once
#include "Quad.h"
class Square : public Quad {
public:
	void fig_name() override;

	Square(int a) : Quad(a, a, a, a, 90, 90, 90, 90) {};
};

