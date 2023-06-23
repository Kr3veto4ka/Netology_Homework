#include "Triangle.h"
#include "FigExceptions.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	if (A + B + C != 180) {
		FigExceptions exception("Ошибка создания фигуры. Причина: сумма углов не равна 180");
		throw exception;
	}
	else {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}
};

void Triangle::fig_name() {
	std::cout << "Треугольник:\n";
}

void Triangle::print_info() {
	fig_name();
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n\n";
}