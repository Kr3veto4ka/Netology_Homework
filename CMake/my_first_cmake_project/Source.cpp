#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;
	system("pause");
}