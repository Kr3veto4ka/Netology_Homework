#include "Quad.h"

void Quad::fig_name() {
	std::cout << "Четырехугольник:\n";
}

void Quad::print_info() {
	fig_name();
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
}