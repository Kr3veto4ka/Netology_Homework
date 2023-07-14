#include <iostream>
#include <fstream>

int main() {
	setlocale(LC_ALL, "RU");
	int firstSide = 0, secondSide = 0;
	float firstSum = 0, secondSum = 0, onePerson;

	std::cout << "������� ���������� ������� ������ �������: ";
	std::cin >> firstSide;
	std::cout << "������� ���������� ������� ������ �������: ";
	std::cin >> secondSide;
	std::cout << "������� ����� ������ �������: ";
	std::cin >> firstSum;
	std::cout << "������� ����� ������ �������: ";
	std::cin >> secondSum;

	onePerson = (firstSum + secondSum) / (firstSide + secondSide);

	std::cout << onePerson << " ������� �� ������ ��������\n";
	std::cout << "������ ������� ������ ���������: " << onePerson * firstSide << ", � ��������� " << firstSum << std::endl;
	std::cout << "������ ������� ������ ���������: " << onePerson * secondSide << ", � ��������� " << secondSum << std::endl;

	if (firstSum > secondSum)
		std::cout << "������ ������� ������ ������ ������ " << firstSum - onePerson * firstSide << std::endl << std::endl;
	else if (firstSum < secondSum)
		std::cout << "������ ������� ������ ������ ������ " << secondSum - onePerson * secondSide << std::endl << std::endl;
	else
		std::cout << "����� ������ ������ �� ������\n" << std::endl;
}