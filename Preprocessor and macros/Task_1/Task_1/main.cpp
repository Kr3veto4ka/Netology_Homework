#include <iostream>
#define MODE 1

#define MAIN(string) int main() { \
setlocale(LC_ALL, "RU"); \
std::cout << string << std::endl; \

#define MAIN_END }

#ifndef MODE
#error  define MODE

#else

#if MODE == 0
MAIN("������� � ������������� ������")
MAIN_END

#elif MODE == 1
int add(int& num1, int& num2) {
	return num1 + num2;
}

MAIN("������� � ������ ������")
int num1, num2;

std::cout << "������� ����� 1: ";
std::cin >> num1;

std::cout << "������� ����� 2: ";
std::cin >> num2;

std::cout << add(num1, num2);
MAIN_END

#else
MAIN("����������� �����. �������� ������.")
MAIN_END

#endif
#endif