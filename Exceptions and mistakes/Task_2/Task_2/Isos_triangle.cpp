#include "Isos_triangle.h"
#include "FigExceptions.h"

Isos_triangle::Isos_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	if (a != c) {
		FigExceptions exception("Ошибка создания фигуры. Причина: сторона a не равна стороне c");
		throw exception;
	}
	else if (A != C) {
		FigExceptions exception("Ошибка создания фигуры. Причина: угол A не равен углу C");
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
}

void Isos_triangle::fig_name() {
	std::cout << "Равнобедренный треугольник:\n";
}