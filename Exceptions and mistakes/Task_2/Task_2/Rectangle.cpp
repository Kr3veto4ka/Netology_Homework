#include "Rectangle.h"
#include "FigExceptions.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quad(a, b, c, d, A, B, C, D) {
	if (a != c || b != d) {
		FigExceptions exception("Ошибка создания фигуры. Причина: стороны попарно не равны");
		throw exception;
	}
	else if (A != 90 || B != 90 || C != 90 || D != 90) {
		FigExceptions exception("Ошибка создания фигуры. Причина: Углы не равны 90 градусам");
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

void Rectangle::fig_name() {
	std::cout << "Прямоугольник:\n";
}