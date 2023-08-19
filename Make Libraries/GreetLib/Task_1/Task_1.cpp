#include "Greeter.h"
#include <Windows.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	std::cout << "Введите имя: ";
	std::string input;
	SetConsoleCP(1251);
	getline(std::cin, input);

	Greeter Value(input);
	SetConsoleOutputCP(1251);
	std::cout << Value.greet();
}

