#include <iostream>
#include <fstream>

int main() {
	setlocale(LC_ALL, "RU");
	int firstSide = 0, secondSide = 0;
	float firstSum = 0, secondSum = 0, onePerson;

	std::cout << "Введите количестов челвоек первой стороны: ";
	std::cin >> firstSide;
	std::cout << "Введите количестов челвоек второй стороны: ";
	std::cin >> secondSide;
	std::cout << "Введите сумму первой стороны: ";
	std::cin >> firstSum;
	std::cout << "Введите сумму второй стороны: ";
	std::cin >> secondSum;

	onePerson = (firstSum + secondSum) / (firstSide + secondSide);

	std::cout << onePerson << " Выходит на одного человека\n";
	std::cout << "Первая сторона должна потратить: " << onePerson * firstSide << ", а потратила " << firstSum << std::endl;
	std::cout << "Вторая сторона должна потратить: " << onePerson * secondSide << ", а потратила " << secondSum << std::endl;

	if (firstSum > secondSum)
		std::cout << "Вторая сторона должна отдать первой " << firstSum - onePerson * firstSide << std::endl << std::endl;
	else if (firstSum < secondSum)
		std::cout << "Первая сторона должна отдать второй " << secondSum - onePerson * secondSide << std::endl << std::endl;
	else
		std::cout << "Никто никому ничего не должен\n" << std::endl;
}