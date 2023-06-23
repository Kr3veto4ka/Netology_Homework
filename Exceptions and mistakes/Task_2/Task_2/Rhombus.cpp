#include "Rhombus.h"

#include "FigExceptions.h"

Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Quad(a, b, c, d, A, B, C, D) {
	if (a != b || b != c || c != d) {
		FigExceptions exception("������ �������� ������. �������: ������� �� ����� ����� �����");
		throw exception;
	}
	else if (A != C|| B != D) {
		FigExceptions exception("������ �������� ������. �������: ���� �� ����� �������");
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

void Rhombus::fig_name() {
	std::cout << "����:\n";
}