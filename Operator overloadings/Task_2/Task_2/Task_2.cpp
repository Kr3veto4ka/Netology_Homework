#include <iostream>
#include "Fraction.h"


std::ostream& operator<<(std::ostream& out, const Fraction& F)
{
	if (F.numerator_ < 0 || F.denominator_ < 0)
		out << "-";

	out << abs(F.numerator_) << "/" << abs(F.denominator_);
	return out;
}

int main()
{
	setlocale(LC_ALL, "RU");
	int num, den;
	std::cout << "������� ��������� ����� 1: ";
	std::cin >> num;
	std::cout << "������� ����������� ����� 1: ";
	std::cin >> den;

	Fraction f1(num, den);

	std::cout << "������� ��������� ����� 2: ";
	std::cin >> num;
	std::cout << "������� ����������� ����� 2: ";
	std::cin >> den;

	Fraction f2(num, den);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1 << " * " << f2 << " = " << ++f1 * f2 << std::endl;
	std::cout << "�������� ����� 1 = " << f1 << std::endl;
	std::cout << f1 << "--" << " * " << f2 << " = " << f1-- * f2 << std::endl;
	std::cout << "�������� ����� 1 = " << f1;

	return 0;
}