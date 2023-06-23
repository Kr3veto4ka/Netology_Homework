#include "Square.h"
#include "FigExceptions.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Quad(a, b, c, d, A, B, C, D) {
	if (a != b || b != c || c != d) {
		FigExceptions exception("������ �������� ������. �������: ������� �� ����� ����� �����");
		throw exception;
	}
	else if (A != 90 || B != 90 || C != 90 || D != 90) {
		FigExceptions exception("������ �������� ������. �������: ���� �� ����� 90 ��������");
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

void Square::fig_name() {
	std::cout << "�������:\n";
}