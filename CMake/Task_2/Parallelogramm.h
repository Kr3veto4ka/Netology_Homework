#pragma once

#include "Quad.h"

class Parallelogramm : public Quad {
public:
	void fig_name() override;

	Parallelogramm(int ac, int bd, int AC, int BD) : Quad(ac, bd, ac, bd, AC, BD, AC, BD) {};
};