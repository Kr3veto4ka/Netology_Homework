#include <iostream>
#include <Windows.h>
#include "Leaver.h"
int main()
{
	SetConsoleOutputCP(1251);
	std::cout << "Введите имя: ";
	std::string name;
	SetConsoleCP(1251);
	getline(std::cin, name);
	Leaver leave(name);
	std::cout << leave.leave();
}

