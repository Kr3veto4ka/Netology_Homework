#include "Quad.h"

void Quad::fig_name() {
	std::cout << "���������������:\n";
}

void Quad::print_info() {
	fig_name();
	std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
	std::cout << "����: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
}