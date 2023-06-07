#include "MathFunctions.h"
#include <iostream>

float mathFunctions::addition(float& num1, float& num2) {
	return num1 + num2;
}

float mathFunctions::subtraction(float& num1, float& num2) {
	return num1 - num2;
}

float mathFunctions::multiplication(float& num1, float& num2) {
	return num1 * num2;
}

float mathFunctions::division(float& num1, float& num2) {
	return num1 / num2;
}

float mathFunctions::power(float& num1, float num2) {
	if (num2 == 1)
		return num1;
	return num1 * (mathFunctions::power(num1, --num2));
}

void chooseOperation(float& num1, float& num2) {
	int operation = 0;
	std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> operation;

	switch (operation){
	case 1:
		std::cout << num1 << " + " << num2 << " = " << mathFunctions::addition(num1, num2);
		break;
	case 2:
		std::cout << num1 << " - " << num2 << " = " << mathFunctions::subtraction(num1, num2);
		break;
	case 3:
		std::cout << num1 << " * " << num2 << " = " << mathFunctions::multiplication(num1, num2);
		break;
	case 4:
		std::cout << num1 << " / " << num2 << " = " << mathFunctions::division(num1, num2);
		break;
	case 5:
		std::cout << num1 << " в степени " << num2 << " = " << mathFunctions::power(num1, num2);
		break;
	}
}

void start() {
	float num1, num2;
	std::cout << "¬ведите первое число: ";
	std::cin >> num1;
	std::cout << "¬ведите второе число: ";
	std::cin >> num2;
	chooseOperation(num1, num2);
}