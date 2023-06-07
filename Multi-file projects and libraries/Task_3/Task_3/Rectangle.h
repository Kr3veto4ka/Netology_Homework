#pragma once
#include "Quad.h"

class Rectangle : public Quad {
public:
	void fig_name() override;

	Rectangle(int ac, int bd) : Quad(ac, bd, ac, bd, 90, 90, 90, 90) {};
};

