#include "Triangle.h"

void Triangle::fig_name() {
	std::cout << "�����������:\n";
}

void Triangle::print_info() {
	fig_name();
	std::cout << "�������: a=" << a << " b=" << b << " c=" << c << "\n";
	std::cout << "����: A=" << A << " B=" << B << " C=" << C << "\n\n";
}