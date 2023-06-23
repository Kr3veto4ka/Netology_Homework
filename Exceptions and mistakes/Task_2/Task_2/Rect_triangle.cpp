#include "Rect_triangle.h"
#include "FigExceptions.h"

Rect_triangle::Rect_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	if (C != 90) {
		FigExceptions exception("������ �������� ������. �������: ���� C �� ����� 90 ��������");
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

void Rect_triangle::fig_name() {
	std::cout << "������������� �����������:\n";
}