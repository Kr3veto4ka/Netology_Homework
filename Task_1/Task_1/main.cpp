#include <iostream>

class Figure {
public:
	Figure() : edges(0), name("������") {};

	std::string get_name() {
		return name;
	}

	int get_edges() {
		return edges;
	}

protected:
	std::string name;
	int edges;
};

class Triangle : public Figure {
public:
	Triangle() {
		edges = 3;
		name = "�����������";
	}
};

class Quad : public Figure {
public:
	Quad() {
		edges = 4;
		name = "�������";
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	Figure figure;
	Triangle triangle;
	Quad quad;
	std::cout << "���������� ������:\n";
	std::cout << figure.get_name() << ": " << figure.get_edges() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_edges() << std::endl;
	std::cout << quad.get_name() << ": " << quad.get_edges();
}