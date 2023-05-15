#include <iostream>

class Figure {
public:
	Figure() : edges(0) {};

	int get_edges() {
		return edges;
	}

protected:
	int edges;
};

class Triangle : public Figure {
public:
	Triangle() {
		edges = 3;
	}
};

class Quad : public Figure {
public:
	Quad() {
		edges = 4;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	Figure figure;
	Triangle triangle;
	Quad quad;
	std::cout << "Количество сторон:\n";
	std::cout << "Фигура: " << figure.get_edges() << std::endl;
	std::cout << "Треугольник: " << triangle.get_edges() << std::endl;
	std::cout << "Четырехугольник: " << quad.get_edges();
}