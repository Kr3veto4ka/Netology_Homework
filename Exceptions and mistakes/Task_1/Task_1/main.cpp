#include <iostream>

int function(std::string str, int forbidden_length){
	if (str.length() == forbidden_length) {
		std::runtime_error bad_lenght("�� ����� ��������� �����! �� ��������!");
		throw bad_lenght;
	}
	return str.length();
}

int main() {
	setlocale(LC_ALL, "RU");
	std::string str;
	int forbidden_length = 0, ans = 0;

	std::cout << "������� ��������� �����: ";
	std::cin >> forbidden_length;
	try {
		while (true) {
			std::cout << "������� �����: ";
			std::cin >> str;
			std::cout << "������ ������ �����: " << function(str, forbidden_length) << std::endl;
		}
	}
	catch(std::runtime_error bad_lenght) {
		std::cout << bad_lenght.what();
	}

}