#include "Triangle.h"

void Triangle::fig_name() {
	std::cout << "Треугольник:\n";
}

void Triangle::print_info() {
	fig_name();
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";
}