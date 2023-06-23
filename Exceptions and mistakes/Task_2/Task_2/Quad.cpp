#include "Quad.h"
#include "FigExceptions.h"

Quad::Quad(int a, int b, int c, int d, int A, int B, int C, int D) {
	if (A + B + C + D != 360) {
		FigExceptions exception("Ошибка создания фигуры. Причина: сумма углов не равна 360");
		throw exception;
	}
	else {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}
};

void Quad::fig_name() {
	std::cout << "Четырехугольник:\n";
}

void Quad::print_info() {
	fig_name();
	std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
	std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n\n";
}