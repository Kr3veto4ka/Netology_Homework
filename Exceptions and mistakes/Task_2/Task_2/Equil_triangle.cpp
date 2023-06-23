#include "Equil_triangle.h"
#include "FigExceptions.h"


Equil_triangle::Equil_triangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
	if (a != c || a != b || b != c) {
		FigExceptions exception("������ �������� ������. �������: ������� �� ����� ����� �����");
		throw exception;
	}
	else if (A != 60 || B != 60|| C != 60) {
		FigExceptions exception("������ �������� ������. �������: ���� �� ����� 60 ��������");
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

void Equil_triangle::fig_name() {
	std::cout << "�������������� �����������:\n";
}
