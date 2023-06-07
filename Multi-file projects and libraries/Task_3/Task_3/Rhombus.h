#pragma once
#include "Quad.h"

class Rhombus : public Quad {
public:
	void fig_name() override;

	Rhombus(int a, int AC, int BD) : Quad(a, a, a, a, AC, BD, AC, BD) {};
};

